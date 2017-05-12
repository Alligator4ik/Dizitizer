#include "DataAnalyzer.h"
#include <QDebug>
#include <fstream>
#include "ToRussianTextForQString.h"

DataAnalyzer::DataAnalyzer(VMECommunication& vmeCommunication):
vmeComm(vmeCommunication){
	boardThreads.resize(vmeComm.numberOfWDF);
	sizeOfBufferInBytes.resize(vmeComm.numberOfWDF);
	bufferToReadIn.resize(vmeComm.numberOfWDF);
	CAEN_DGTZ_ErrorCode error;
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			if ((error = CAEN_DGTZ_AllocateEvent(WDFIdentificators[boardNumber], reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("Создании ивентов"));
			}
			if ((error = CAEN_DGTZ_MallocReadoutBuffer(WDFIdentificators[boardNumber], &bufferToReadIn[boardNumber], &sizeOfBufferInBytes[boardNumber])) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("Аллоцировании памяти"));
			}
		}
	eventHandler = new vector<EventHandler>;
	eventHandler->push_back(EventHandler(vmeComm.channelActiveEnableMask, vmeComm.channelTriggerEnableMask, vmeComm.getAllThresholds()));
}

DataAnalyzer::~DataAnalyzer() {
	CAEN_DGTZ_ErrorCode error;
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			if ((error = CAEN_DGTZ_FreeReadoutBuffer(&bufferToReadIn[boardNumber])) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("Деаллоцировании памяти"));
			}
			if ((error = CAEN_DGTZ_FreeEvent(WDFIdentificators[boardNumber], reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("Уничтожении ивентов"));
			}
		}
}

uint8_t DataAnalyzer::getZeroLevel(CAEN_DGTZ_UINT8_EVENT_t& event, uint8_t channelNumber) {
	uint8_t zeroLevel = 127;				//изначально, 127 - это ноль (в идеальном случае)
	auto zeroLevelWasFound = false;
	//обрабатываем по 500 значений
	//если они все примерно одинаковые (не отличаются на единицу)
	//тогда мы нашли ноль! найдем среднее и вернем его
	for (auto i = 0; i < event.ChSize[channelNumber]; i++) {
		if (zeroLevelWasFound)
			break;
		zeroLevel = event.DataChannel[channelNumber][500 * i];
		auto summaryForMiddle = 0;
		for (auto currentValue = 500 * i; currentValue < 500 * (i+1); currentValue++) {
			//если случилось так, что за 500 значений уровень изменился больше чем на 4 мВ
			//то это точно не ноль! берем следующие 500 значений
			if (event.DataChannel[channelNumber][currentValue] - zeroLevel > 1)
				break;
			summaryForMiddle += event.DataChannel[channelNumber][currentValue];
			if (currentValue % 500 == 499) {
				zeroLevelWasFound = true;
				zeroLevel = summaryForMiddle / 500;
				break;
			}
		}
	}
	return zeroLevel;
}

vector<uint32_t> DataAnalyzer::getImpulsesInEventHandler(EventHandler& eventHandler) const {
	vector<uint32_t> impulses;
	for (auto boardNumber = 0; boardNumber < 9; boardNumber++)						//9 - максимальное кол-во плат в мосту VME
		if (eventHandler.WDFIsEnabled(boardNumber)) {
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++) {
				if (eventHandler.channelIsActive(boardNumber, channelNumber)) {
					for (auto eventNumber = eventHandler.getNumberOfEventsForBoard(boardNumber) - eventHandler.eventsAddedAtLastIteration; eventNumber < eventHandler.getNumberOfEventsForBoard(boardNumber); eventNumber++) {
						auto event = eventHandler.getEvent(boardNumber, eventNumber);
						if (event.ChSize[channelNumber] != 0) {
							auto zeroLevel = getZeroLevel(event, channelNumber);	//нулевой уровень для данного канала
							auto zeroLevelForDoublePeaks = NULL;					//значение уровня для двойных импульсов; 0 - если последний импульс не двойной
							auto thresholdLevel = vmeComm.getChannelThreshold(boardNumber, channelNumber);
							const auto maxDeltaX = 1000;							//окрестность, в которой будем искать максимальное значение по амплитуде
							auto deltaX = 0;										//положение в окрестности
							Point peakPoint = { 0, event.DataChannel[channelNumber][0] };
							if (thresholdLevel < zeroLevel) {
								//поиск по всем отсчетам в событии
								for (auto valueNumber = 1; valueNumber < event.ChSize[channelNumber]; valueNumber++) {
									//поиск пиковой точки
									Point currentPoint;
									currentPoint.x = valueNumber;
									currentPoint.y = event.DataChannel[channelNumber][currentPoint.x];
									if (currentPoint.y < peakPoint.y) {
										peakPoint = currentPoint;
										deltaX = 0;
										continue;
									}
									//если мы все еще в окрестности, то проверяем дальше
									if (deltaX <= maxDeltaX) {
										deltaX++;
										continue;
									}
									//здесь мы уже получили пик
									//проверим, преодолел ли он порог
									//если нет, продолжим поиск так, будто бы и не было этого пика
									if (!zeroLevelForDoublePeaks) {
										if (peakPoint.y > thresholdLevel) {
											valueNumber += deltaX;
											deltaX = 0;
											continue;
										}
									}
									else {
										auto currentAmplitude = peakPoint.y - zeroLevelForDoublePeaks;
										auto thresholdLevelForDoublePeak = thresholdLevel - zeroLevel;
										if (currentAmplitude < thresholdLevelForDoublePeak) {
											valueNumber += deltaX;
											deltaX = 0;
											zeroLevelForDoublePeaks = NULL;
											continue;
										}
									}
									//поиск пиковой точки закончен!
									//qInfo("peak was found, x:%i, channel number:%i", peakPoint.x, channelNumber);
									//здесь мы точно знаем, что пик преодолел порог
									//пора искать начало этого импульса!
									//началом считаем приближение к нулю
									//или отсутствие больших (меньших по амплитуде) значений в некотором интервале
									auto startPoint = peakPoint;
									currentPoint = peakPoint;
									deltaX = 0;
									while (currentPoint.x > 0) {
										currentPoint.x--;
										currentPoint.y = event.DataChannel[channelNumber][currentPoint.x];
										//проверим, не рядом ли мы с нулем
										if (currentPoint.y > zeroLevel - 2) {
											startPoint = currentPoint;
											break;
										}
										//проверяем, достигли ли мы минимума
										if (currentPoint.y > startPoint.y) {
											startPoint = currentPoint;
											deltaX = 0;
											continue;
										}
										//если да, то продолжим поиск в окрестности слева
										if (deltaX <= maxDeltaX) {
											deltaX++;
											continue;
										}
										//если прошли всю окрестность и меньше не нашли
										//то ура, мы нашли начало импульса!
										break;
									}
									//qInfo("start was found, x:%i, channel number:%i", startPoint.x, channelNumber);
									impulses.push_back(startPoint.x);
									//ищем спад до нуля или до возрастания
									//перепрыгнем пик и окрестность (в них уж точно нет)
									currentPoint = peakPoint;
									currentPoint.x += maxDeltaX;
									currentPoint.y = event.DataChannel[channelNumber][currentPoint.x];
									//ищем конец сигнала
									//todo: улучшить поиск хвоста, т.к. он слишком длинный
									auto endPoint = currentPoint;
									while (currentPoint.x < event.ChSize[channelNumber]) {
										currentPoint.x++;
										currentPoint.y = event.DataChannel[channelNumber][currentPoint.x];
										//едем до нуля или до возвышения на +2 пункта от минимального уровня
										if (currentPoint.y > zeroLevel - 2) {
											//в таком случае, импульс одинарный
											zeroLevelForDoublePeaks = NULL;
											endPoint = currentPoint;
											break;
										}
										//если нашли меньшую амплитуду, то обновим параметры окрестности
										if (currentPoint.y >= endPoint.y) {
											endPoint = currentPoint;
											deltaX = 0;
											continue;
										}
										if (deltaX <= maxDeltaX) {
											deltaX++;
											continue;
										}
										zeroLevelForDoublePeaks = endPoint.y;
										break;
									}
									//qInfo("end was found, x:%i, channel number:%i", endPoint.x, channelNumber);
									//qInfo("zero level is now %i\n", zeroLevelForDoublePeaks ? zeroLevelForDoublePeaks : zeroLevel);
									//по идее, на этом цикл можно закончить
									// ReSharper disable once CppAssignedValueIsNeverUsed
									valueNumber = endPoint.x;
									//сбросим peakPoint на ноль
									//todo: здесь надо глянуть, к чему лучше приравнять пикПойнт, так как, возможно, мы останемся выше порога (если хвост будет реально пологий)
									peakPoint = endPoint;
									//todo: а теперь все это надо протестить очень(!) много раз
								}
							}
						}
					}
				}
			}
		}
	return impulses;
}

bool DataAnalyzer::readData() {
	eventHandler->back().setRecordLength(vmeComm.getRecordLength());
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	//start acquistition cycle on all enabled boards
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++) {
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			boardThreads[boardNumber] = async(launch::async, &DataAnalyzer::readDataOnBoard, this, WDFIdentificators[boardNumber], boardNumber);
		}
	}
	auto result = false;
	//stop acquistition cycle on all enabled boards
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++) {
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			result |= boardThreads[boardNumber].get();
		}
	}
	return result;		//if there is anything to read
}

bool DataAnalyzer::readDataOnBoard(uint32_t boardID, uint16_t boardNumber) {
	CAEN_DGTZ_ErrorCode error;
	eventHandler->back().eventsAddedAtLastIteration = 0;
	if (eventHandler->back().getAllThresholds() != vmeComm.getAllThresholds())
		eventHandler->push_back(EventHandler(vmeComm.channelActiveEnableMask, vmeComm.channelTriggerEnableMask, vmeComm.getAllThresholds()));
	if ((error = CAEN_DGTZ_IRQWait(boardID, 500)) != CAEN_DGTZ_Success) {
		if (error == CAEN_DGTZ_Timeout)
			return false;			//if there is nothing to read
		vmeComm.addTimeOfBoardError(boardNumber);
		vmeComm.addBoardError(boardNumber, error);
		vmeComm.addStringError(boardNumber, toRussian("Ожидании прерывания"));
		return false;
	}
	if ((error = CAEN_DGTZ_RearmInterrupt(boardID)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardNumber);
		vmeComm.addBoardError(boardNumber, error);
		vmeComm.addStringError(boardNumber, toRussian("Обновлении прерывания"));
		return false;
	}
	if ((error = CAEN_DGTZ_ReadData(boardID, CAEN_DGTZ_SLAVE_TERMINATED_READOUT_MBLT, bufferToReadIn[boardNumber], &sizeOfBufferInBytes[boardNumber])) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardNumber);
		vmeComm.addBoardError(boardNumber, error);
		vmeComm.addStringError(boardNumber, toRussian("Непосредственном чтении"));
		return false;
	}
	uint32_t numberOfEventsStored;
	if ((error = CAEN_DGTZ_GetNumEvents(boardID, bufferToReadIn[boardNumber], sizeOfBufferInBytes[boardNumber], &numberOfEventsStored)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardNumber);
		vmeComm.addBoardError(boardNumber, error);
		vmeComm.addStringError(boardNumber, toRussian("Получении кол-ва ивентов"));
		return false;
	}
	//every event from buffer will be storred in currentEvents
	if (numberOfEventsStored > 0) {
		CAEN_DGTZ_EventInfo_t eventInfo;
		char* eventPointer = nullptr;
		//qInfo() << "Get " << numberOfEventsStored << " event(s)!";
		for (auto eventNumber = 0; eventNumber < numberOfEventsStored; eventNumber++) {
			if ((error = CAEN_DGTZ_GetEventInfo(boardID, bufferToReadIn[boardNumber], sizeOfBufferInBytes[boardNumber], eventNumber, &eventInfo, &eventPointer)) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("Получении информации о %1 ивенте").arg(eventNumber));
				return false;
			}
			if ((error = CAEN_DGTZ_DecodeEvent(boardID, eventPointer, reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("Раскодировании %1 ивента").arg(eventNumber));
				return false;
			}
			eventHandler->back().addEvent(boardNumber, vmeComm.channelActiveEnableMask, *currentEvent, vmeComm.getBoardThresholds(boardNumber));
			eventHandler->back().eventsAddedAtLastIteration++;
		}
	}
	return true;		//if information read successfully
}

void DataAnalyzer::writeData() {
	if (eventHandler->back().eventsStored > 20) {
		eventHandler->back().writeToFile();
	}
}

EventHandler& DataAnalyzer::getHandler() const {
	return this->eventHandler->back();
}

CAEN_DGTZ_UINT8_EVENT_t* DataAnalyzer::getEventForDraw() const {
	for (auto boardNumber = 0; boardNumber < vmeComm.getWDFIdentificators().size(); boardNumber++)
		if (eventHandler->back().WDFIsEnabled(boardNumber))
			return &eventHandler->back().getEvent(boardNumber, eventHandler->back().getNumberOfEventsForBoard(boardNumber)-1);
	return nullptr;
}

uint8_t minElement(uint8_t* array, uint32_t size) {
	auto minElement = array[0];
	for (auto i = 1; i < size; i++)
		if (array[i] < minElement)
			minElement = array[i];
	return minElement;
}

uint8_t maxElement(uint8_t* array, uint32_t size) {
	auto minElement = array[0];
	for (auto i = 1; i < size; i++)
		if (array[i] > minElement)
			minElement = array[i];
	return minElement;
}

vector<uint16_t> DataAnalyzer::getApmlitudesForSpectre(uint8_t boardNumber, uint8_t channel) const {
	vector<uint16_t> amplitudes;
	for (auto eventNumber = eventHandler->back().getNumberOfEventsForBoard(boardNumber) - eventHandler->back().eventsAddedAtLastIteration; eventNumber < eventHandler->back().getNumberOfEventsForBoard(boardNumber); eventNumber++) {
		auto event = eventHandler->back().getEvent(boardNumber, eventNumber); 
		uint8_t amp;
		if (vmeComm.polarity == CAEN_DGTZ_TriggerOnFallingEdge)
			amp = minElement(event.DataChannel[channel], event.ChSize[channel]);
		else
			amp = maxElement(event.DataChannel[channel], event.ChSize[channel]);
		amplitudes.push_back(abs((getZeroLevel(event, channel) - amp) * 3.92));		//from counts to mV
	}
	return amplitudes;
}

int16_t DataAnalyzer::convertFromVMECountsTomV(uint8_t counts) {
	return (counts - 127) * 3.94;
}

vector<chrono::microseconds> DataAnalyzer::getTimeStepsBetweenPeaks() {
	vector<chrono::microseconds> timeSteps;
	auto starts = getImpulsesInEventHandler(eventHandler->back());
	//qInfo("number of impulses: %i", starts.size());
	auto startImpulses = 0;
	if (starts.size()) {
		sort(starts.begin(), starts.end(), [](uint32_t a, uint32_t b) {return a < b; });
		for (auto firstPeak = 0; firstPeak < starts.size() - 1; firstPeak++)
			for (auto secondPeak = firstPeak + 1; secondPeak < starts.size(); secondPeak++)
				if (starts[secondPeak] - starts[firstPeak] < timeWindow.count() / 2)
					timeSteps.push_back(chrono::duration_cast<chrono::microseconds>(chrono::nanoseconds(starts[secondPeak] - starts[firstPeak]) * 2));
				else
					break;
		for (auto timeCoordinate : starts)
			if (timeCoordinate < eventHandler->back().getRecordLength() - timeWindow.count() / 2)
				startImpulses++;
	}
	//qInfo("number of start impulses: %i", startImpulses);
	return timeSteps;
}

void DataAnalyzer::setTimeWindow(chrono::milliseconds newTimeWindow) {
	this->timeWindow = newTimeWindow;
}

chrono::microseconds DataAnalyzer::getTimeWindow() const {
	return this->timeWindow;
}
