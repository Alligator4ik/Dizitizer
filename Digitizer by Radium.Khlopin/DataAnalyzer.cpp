#include "DataAnalyzer.h"
#include <qlogging.h>

DataAnalyzer::DataAnalyzer(VMECommunication& vmeCommunication):
vmeComm(vmeCommunication){
}


DataAnalyzer::~DataAnalyzer()
{
}

void DataAnalyzer::getData() {
	CAEN_DGTZ_ErrorCode error;
	char*		bufferToReadIn = nullptr;
	uint32_t	sizeOfBufferInBytes;
	auto WDFIdentificators = vmeComm.getWDFIdentificators();
	for (auto boardNumber = 0; boardNumber < WDFIdentificators.size(); boardNumber++) {
		if (vmeComm.WDFIsEnabled[boardNumber]) {
			error = CAEN_DGTZ_MallocReadoutBuffer(WDFIdentificators[boardNumber], &bufferToReadIn, &sizeOfBufferInBytes);
			//do smth with buffer
			error = CAEN_DGTZ_FreeReadoutBuffer(&bufferToReadIn);
		}
	}
	delete bufferToReadIn;
}