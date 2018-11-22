/*
 * can_proto.c
 *
 *  Created on: Dec 7, 2017
 *      Author: PT
 */
 
#ifndef INC_SPI_NETWORK_H_
#define INC_SPI_NETWORK_H_

#include "cmsis_os.h"
#include "flash.h"
#define RN8302_READ_POINT_COUNT   22

extern osThreadId taskSPIScanHandle; 
extern float io[2][RN8302_READ_POINT_COUNT];

void ParameterVerification(SPI_HandleTypeDef *hspi,sRN8302FirmParaFile_TypeDef *RN8302FirmPara);
void SPINetwork_init(void);

#endif /* INC_SPI_NETWORK_H_ */
