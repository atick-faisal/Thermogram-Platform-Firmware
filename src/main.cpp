#include "utils/utils.h"

void setup() {
    initializeDebugLog();
}

void loop() {
    String rightValues = getRightFootTempMap();
    String leftValues = getLeftFootTempMap();
    debugMessage(INFO, rightValues);
    debugMessage(INFO, leftValues);
    delay(3000U);
}
