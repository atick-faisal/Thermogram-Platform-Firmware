#include "utils.h"

void initializeProcessingComm() {
#ifdef PROCESSING
    Serial.begin(115200);
    while (!Serial) {
        ;  // ... Wait for serial port to connect
    }
#endif
}

void sendTempMapToProcessing(String rightTempMap, String leftTempMap) {
#ifdef PROCESSING
    size_t length = leftTempMap.length();
    Serial.println(rightTempMap + leftTempMap.substring(0, length - 1));
#endif
}