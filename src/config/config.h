#ifndef SENSOR_CONFIG
#define SENSOR_CONFIG

#include <Arduino.h>

#define DEBUG

const uint8_t N_SENSORS = 25U;
const double DEFAULT_TEMP = 30.0;

static uint8_t RIGHT_FOOT_SENSOR_ADDRESSES[N_SENSORS] = {
    32U, 33U, 34U, 35U, 36U, 37U, 38U, 39U, 40U, 41U, 42U, 43U, 44U,
    45U, 46U, 47U, 48U, 49U, 50U, 51U, 52U, 53U, 54U, 55U, 56U};

static uint8_t LEFT_FOOT_SENSOR_ADDRESSES[N_SENSORS] = {
    90U,  91U,  92U,  93U,  94U,  95U,  96U,  97U,  98U,
    99U,  100U, 101U, 102U, 103U, 104U, 105U, 106U, 107U,
    108U, 109U, 110U, 111U, 112U, 113U, 114U};

#endif