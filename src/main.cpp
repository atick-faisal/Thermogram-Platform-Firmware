#include "utils/utils.h"

unsigned long looper = millis();

void setup() {
    // initializeDebugLog();
    initializeProcessingComm();
}

void loop() {
    if (millis() > looper + REFRESH_INTERVAL) {
        looper = millis();
        String rightValues = getRightFootTempMap();
        String leftValues = getLeftFootTempMap();
        sendTempMapToProcessing(rightValues, leftValues);
        
        // debugMessage(INFO, rightValues);
        // debugMessage(INFO, leftValues);
    }
}
