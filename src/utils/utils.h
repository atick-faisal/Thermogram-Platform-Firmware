#ifndef SENSOR_UTILS
#define SENSOR_UTILS

#include <Adafruit_MLX90614.h>
#include <SPI.h>

#include "../config/config.h"

enum DebugLevel { INFO, SUCCESS, LOADING, ERROR };
enum Foot { RIGHT, LEFT };

// ... Logging Utils
void initializeDebugLog();
void debugMessage(DebugLevel debugLevel, const String message);

// ... Temperature Utils
void readTempValues(const uint8_t addresses[], double tempValues[]);
void readAverageTempValues(const uint8_t addresses[], double tempValues[]);
String getTempMap(Foot foot);
String getAverageTempMap(Foot foot);

// ... Processing Utils
void initializeProcessingComm();
void sendTempMapToProcessing(String rightTempMap, String leftTempMap);

#endif