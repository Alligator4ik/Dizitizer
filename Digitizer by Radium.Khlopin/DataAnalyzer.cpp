#include "DataAnalyzer.h"
#include <QDebug>
#include <fstream>
#include "ToRussianTextForQString.h"

DataAnalyzer::DataAnalyzer(VMECommunication& vmeCommunication):
vmeComm(vmeCommunication){
	boardThreads.resize(vmeComm.numberOfWDF);
	currentEvents.resize(vmeComm.numberOfWDF);
	sizeOfBufferInBytes.resize(vmeComm.numberOfWDF);
	bufferToReadIn.resize(vmeComm.numberOfWDF);
	CAEN_DGTZ_ErrorCode error;
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			if ((error = CAEN_DGTZ_AllocateEvent(WDFIdentificators[boardNumber], reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("�������� �������"));
			}
			if ((error = CAEN_DGTZ_MallocReadoutBuffer(WDFIdentificators[boardNumber], &bufferToReadIn[boardNumber], &sizeOfBufferInBytes[boardNumber])) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("������������� ������"));
			}
		}
}

DataAnalyzer::~DataAnalyzer() {
	CAEN_DGTZ_ErrorCode error;
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++)
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			if ((error = CAEN_DGTZ_FreeReadoutBuffer(&bufferToReadIn[boardNumber])) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("��������������� ������"));
			}
			if ((error = CAEN_DGTZ_FreeEvent(WDFIdentificators[boardNumber], reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("����������� �������"));
			}
		}
}

uint8_t DataAnalyzer::getZeroLevel(CAEN_DGTZ_UINT8_EVENT_t& event, uint8_t channelNumber) const {
	uint8_t zeroLevel = 127;				//����������, 127 - ��� ���� (� ��������� ������)
	auto zeroLevelWasFound = false;
	//������������ �� 500 ��������
	//���� ��� ��� �������� ���������� (�� ���������� �� �������)
	//����� �� ����� ����! ������ ������� � ������ ���
	for (auto i = 0; i < event.ChSize[channelNumber]; i++) {
		if (zeroLevelWasFound)
			break;
		zeroLevel = event.DataChannel[channelNumber][500 * i];
		auto summaryForMiddle = 0;
		for (auto currentValue = 500 * i; currentValue < 500 * (i+1); currentValue++) {
			//���� ��������� ���, ��� �� 500 �������� ������� ��������� ������ ��� �� 4 ��
			//�� ��� ����� �� ����! ����� ��������� 500 ��������
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

bool DataAnalyzer::readData() {
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
	if ((error = CAEN_DGTZ_IRQWait(boardID, 500)) != CAEN_DGTZ_Success) {
		if (error == CAEN_DGTZ_Timeout)
			return false;			//if thire is nothing to read
		vmeComm.addTimeOfBoardError(boardNumber);
		vmeComm.addBoardError(boardNumber, error);
		vmeComm.addStringError(boardNumber, toRussian("�������� ����������"));
		return false;
	}
	if ((error = CAEN_DGTZ_RearmInterrupt(boardID)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardNumber);
		vmeComm.addBoardError(boardNumber, error);
		vmeComm.addStringError(boardNumber, toRussian("���������� ����������"));
		return false;
	}
	if ((error = CAEN_DGTZ_ReadData(boardID, CAEN_DGTZ_SLAVE_TERMINATED_READOUT_MBLT, bufferToReadIn[boardNumber], &sizeOfBufferInBytes[boardNumber])) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardNumber);
		vmeComm.addBoardError(boardNumber, error);
		vmeComm.addStringError(boardNumber, toRussian("���������������� ������"));
		return false;
	}
	uint32_t numberOfEventsStored;
	if ((error = CAEN_DGTZ_GetNumEvents(boardID, bufferToReadIn[boardNumber], sizeOfBufferInBytes[boardNumber], &numberOfEventsStored)) != CAEN_DGTZ_Success) {
		vmeComm.addTimeOfBoardError(boardNumber);
		vmeComm.addBoardError(boardNumber, error);
		vmeComm.addStringError(boardNumber, toRussian("��������� ���-�� �������"));
		return false;
	}
	//every event from buffer will be storred in currentEvents
	if (numberOfEventsStored > 0) {
		CAEN_DGTZ_EventInfo_t eventInfo;
		char* eventPointer = nullptr;
		qInfo() << "Get " << numberOfEventsStored << " event(s)!";
		currentEvents[boardNumber].resize(numberOfEventsStored);
		for (auto eventNumber = 0; eventNumber < numberOfEventsStored; eventNumber++) {
			if ((error = CAEN_DGTZ_GetEventInfo(boardID, bufferToReadIn[boardNumber], sizeOfBufferInBytes[boardNumber], eventNumber, &eventInfo, &eventPointer)) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("��������� ���������� � %1 ������").arg(eventNumber));
				return false;
			}
			if ((error = CAEN_DGTZ_DecodeEvent(boardID, eventPointer, reinterpret_cast<void**>(&currentEvent))) != CAEN_DGTZ_Success) {
				vmeComm.addTimeOfBoardError(boardNumber);
				vmeComm.addBoardError(boardNumber, error);
				vmeComm.addStringError(boardNumber, toRussian("�������������� %1 ������").arg(eventNumber));
				return false;
			}
 			currentEvents[boardNumber][eventNumber] = currentEvent;
		}
	}
	return true;		//if information read successfully
}

void DataAnalyzer::writeData() {
	//not implemented yet
}

CAEN_DGTZ_UINT8_EVENT_t* DataAnalyzer::getEventForDraw() const {
	for (auto boardNumber = 0; boardNumber < vmeComm.getWDFIdentificators().size(); boardNumber++)
		if (vmeComm.WDFIsEnabled[boardNumber])
			return currentEvents[boardNumber][0];
	return nullptr;
}

vector<CAEN_DGTZ_UINT8_EVENT_t*>& DataAnalyzer::getEvents(uint8_t boardNumber) {
	return currentEvents[boardNumber];
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

vector<uint16_t> DataAnalyzer::getApmlitudesForSpectre(uint8_t boardNumber, uint8_t channel) {
	vector<uint16_t> amplitudes;
	for (auto event : currentEvents[boardNumber]) {
		uint8_t amp;
		if (vmeComm.polarity == CAEN_DGTZ_TriggerOnFallingEdge)
			amp = minElement(event->DataChannel[channel], event->ChSize[channel]);
		else
			amp = maxElement(event->DataChannel[channel], event->ChSize[channel]);
		amplitudes.push_back(abs((getZeroLevel(*event, channel)-amp) * 3.92));		//from counts to mV
	}
	return amplitudes;
}

int16_t DataAnalyzer::convertFromVMECountsTomV(uint8_t counts) {
	return (counts - 127) * 3.94;
}

vector<Point> DataAnalyzer::getImpulses() {
	vector<Point> impulses;
	for (auto boardNumber = 0; boardNumber < vmeComm.numberOfWDF; boardNumber++)
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			for (auto channelNumber = 0; channelNumber < 8; channelNumber++) {
				if (vmeComm.channelActiveEnableMask[boardNumber] & 1 << channelNumber) {
					for (auto event : currentEvents[boardNumber]) {
						if (event->ChSize[channelNumber] != 0) {
							auto zeroLevel = getZeroLevel(*event, channelNumber);	//������� ������� ��� ������� ������
							auto zeroLevelForDoublePeaks = NULL;					//�������� ������ ��� ������� ���������; 0 - ���� ��������� ������� �� �������
							auto thresholdLevel = vmeComm.getChannelThreshold(boardNumber, channelNumber);
							const auto maxDeltaX = 1000;							//�����������, � ������� ����� ������ ������������ �������� �� ���������
							auto deltaX = 0;										//��������� � �����������
							Point peakPoint = { 0, event->DataChannel[channelNumber][0] };
							//����� �� ���� �������� � �������
							for (auto valueNumber = 1; valueNumber < event->ChSize[channelNumber]; valueNumber++) {
								//����� ������� �����
								Point currentPoint;
								currentPoint.x = valueNumber;
								currentPoint.y = event->DataChannel[channelNumber][currentPoint.x];
								if (currentPoint.y < peakPoint.y) {
									peakPoint = currentPoint;
									deltaX = 0;
									continue;
								}
								//���� �� ��� ��� � �����������, �� ��������� ������
								if (deltaX <= maxDeltaX) {
									deltaX++;
									continue;
								}
								//����� �� ��� �������� ���
								//��������, ��������� �� �� �����
								//���� ���, ��������� ����� ���, ����� �� � �� ���� ����� ����
								if (!zeroLevelForDoublePeaks) {
									if (peakPoint.y > thresholdLevel) {
										valueNumber += deltaX;
										deltaX = 0;
										continue;
									}
								} else {
									auto currentAmplitude = peakPoint.y - zeroLevelForDoublePeaks;
									auto thresholdLevelForDoublePeak = thresholdLevel - zeroLevel;
									if (currentAmplitude < thresholdLevelForDoublePeak) {
										valueNumber += deltaX;
										deltaX = 0;
										zeroLevelForDoublePeaks = NULL;
										continue;
									}
									//todo: ����������
								}
								//����� ������� ����� ��������!
								qInfo("peak was found, x:%i, channel number:%i", peakPoint.x, channelNumber);

								//����� �� ����� �����, ��� ��� ��������� �����
								//���� ������ ������ ����� ��������!
								//������� ������� ����������� � ����
								//��� ���������� ������� (������� �� ���������) �������� � ��������� ���������
								auto startPoint = peakPoint;
								currentPoint = peakPoint;
								deltaX = 0;
								while (true) {
									currentPoint.x--;
									currentPoint.y = event->DataChannel[channelNumber][currentPoint.x];
									//��������, �� ����� �� �� � �����
									if (currentPoint.y > zeroLevel - 2) {
										startPoint = currentPoint;
										break;
									}
									//���������, �������� �� �� ��������
									if (currentPoint.y > startPoint.y) {
										startPoint = currentPoint;
										deltaX = 0;
										continue;
									}
									//���� ��, �� ��������� ����� � ����������� �����
									if (deltaX <= maxDeltaX) {
										deltaX++;
										continue;
									}
									//���� ������ ��� ����������� � ������ �� �����
									//�� ���, �� ����� ������ ��������!
									break;
								}
								qInfo("start was found, x:%i, channel number:%i", startPoint.x, channelNumber);
								impulses.push_back(peakPoint);
								//���� ���� �� ���� ��� �� �����������
								//����������� ��� � ����������� (� ��� �� ����� ���)
								currentPoint = peakPoint;
								currentPoint.x += maxDeltaX;
								currentPoint.y = event->DataChannel[channelNumber][currentPoint.x];
								//���� ����� �������
								//todo: �������� ����� ������, �.�. �� ������� �������
								auto endPoint = currentPoint;
								while (true) {
									currentPoint.x++;
									currentPoint.y = event->DataChannel[channelNumber][currentPoint.x];
									//���� �� ���� ��� �� ���������� �� +2 ������ �� ������������ ������
									if (currentPoint.y > zeroLevel - 2) {
										//� ����� ������, ������� ���������
										zeroLevelForDoublePeaks = NULL;
										endPoint = currentPoint;
										break;
									}
									//���� ����� ������� ���������, �� ������� ��������� �����������
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
								qInfo("end was found, x:%i, channel number:%i", endPoint.x, channelNumber);
								qInfo("zero level is now %i\n", zeroLevelForDoublePeaks ? zeroLevelForDoublePeaks : zeroLevel);
								//�� ����, �� ���� ���� ����� ���������
								// ReSharper disable once CppAssignedValueIsNeverUsed
								valueNumber = endPoint.x;
								//������� peakPoint �� ����
								//todo: ����� ���� �������, � ���� ����� ���������� ��������, ��� ���, ��������, �� ��������� ���� ������ (���� ����� ����� ������� �������)
								peakPoint = endPoint;
								//todo: � ������ ��� ��� ���� ���������� �����(!) ����� ���
							}
						}
					}
				}
			}
		}
	return impulses;
}
