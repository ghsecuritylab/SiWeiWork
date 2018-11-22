/*
 * can_proto.c
 *
 *  Created on: Dec 7, 2017
 *      Author: PT
 */
 
#ifndef INC_ENV_H_
#define INC_ENV_H_

#include <stdint.h>
#include "flash.h"
#include "user_config.h"
#define PARA_IN_RN8302_COUNT    10
//struct ParaRegAddressInChip{

//};
#define  DEFAULT_ADDRRESS      01
#define  BROADCAST_ADDRRSS     0x1f
#define  DEFAULT_EquipmentType 0x02
#define  FIRMWARE_VERSION     1    //�̼��汾


#define  Standard_Voltage     44000000
#define  VIN_STA              220
#define  Standard_Current     25000000
#define  CURRENT_STA          1.5
#define  VOLTTHRESHOLDUINT    0.1 //(Standard_Voltage /VIN_STA  )     //  threshold unit 1V
#define  CURRETHESHOLDUINT    0.01f// (Standard_Current/(CURRENT_STA*10 ))  //  threshold unit 0.1A
extern uint8_t ParaRegAddressInChip[PARA_IN_RN8302_COUNT];
extern Config_ParameterTypeDef DevConfig_Parameter;

extern void envUserParaLoad(void);

#endif /* INC_ENV_H_ */
