#include "utils.h"

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

void readTempValues(uint8_t addresses[], double tempValues[]) {
    for (uint8_t i = 0; i < N_SENSORS; i++) {
        if (mlx.begin(addresses[i])) {
            tempValues[i] = mlx.readObjectTempC();
        } else {
            char errorMessage[40];
            sprintf(errorMessage, "ERROR READING %02X", addresses[i]);
            debugMessage(ERROR, errorMessage);
            tempValues[i] = DEFAULT_TEMP;
        }
    }
}

String getTempMap(Foot foot) {
    String tempMap = "";
    double tempValues[N_SENSORS];

    switch (foot) {
        case RIGHT:
            readTempValues(RIGHT_FOOT_SENSOR_ADDRESSES, tempValues);
            break;

        case LEFT:
            readTempValues(LEFT_FOOT_SENSOR_ADDRESSES, tempValues);
            break;

        default:
            debugMessage(ERROR, "Invalid Foot!");
            break;
    }

    for (uint8_t i = 0; i < N_SENSORS; i++) {
        tempMap += String(tempValues[i], 2U);
        tempMap += ",";
    }

    return tempMap;
}

String getRightFootTempMap() {
    return getTempMap(RIGHT);
}

String getLeftFootTempMap() {
    return getTempMap(LEFT);
}