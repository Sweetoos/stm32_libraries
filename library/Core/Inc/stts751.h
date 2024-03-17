#ifndef STTS751_H
#define STTS751_H

#include "stm32f4xx_hal.h"
#include <stdint.h>

#define STTS751_I2C_ADDRESS 0xFD

typedef struct
{
    I2C_HandleTypeDef *hi2c;
    uint8_t address;
} STTS751_HandleTypeDef;

void STTS751_Init(STTS751_HandleTypeDef *hstts751, I2C_HandleTypeDef *hi2c);
float STTS751_ReadTemperature(STTS751_HandleTypeDef *hstts751);

#endif
