/*
 * stts751.c
 *
 *  Created on: Mar 18, 2024
 *      Author: kacper
 */

#include "stts751.h"


void STTS751_Init(STTS751_HandleTypeDef *hstts751, I2C_HandleTypeDef *hi2c)
{
	hstts751->hi2c = hi2c;
	hstts751->address = STTS751_I2C_ADDRESS;
}
//float STTS751_ReadTemperature(STTS751_HandleTypeDef *hstts751)
//{
//	uint8_t rawData[2];
//	int16_t rawTemperature;
//	float temperature;
//
//	HAL_I2C_Mem_Read(hstts751->hi2c, hstts751->address, STTS751_REG_TEMP, 1, rawData, 2, HAL_MAX_DELAY);
//
//	    // Konwersja danych na temperaturę
//	rawTemperature = (rawData[0] << 8) | rawData[1];
//	temperature = (float)rawTemperature / 256.0f;
//
//	return temperature;
//}
