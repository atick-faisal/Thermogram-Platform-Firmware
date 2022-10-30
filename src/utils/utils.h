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
void readTempValues(uint8_t addresses[], double tempValues[]);
String getTempMap(Foot foot);
String getRightFootTempMap();
String getLeftFootTempMap();

#endif