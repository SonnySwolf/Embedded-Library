/*******************************************************************************
* 文 件 名: modbus_crc16.h
* 创 建 者: Keda Huang
* 版    本: V1.0
* 创建日期: 2016-10-20
* 文件说明: Modbus RTU CRC16校验
*******************************************************************************/

#ifndef __MODBUS_CRC16_H
#define __MODBUS_CRC16_H

/* 头文件 --------------------------------------------------------------------*/
#include "modbus_proto.h"

/* 函数定义 ------------------------------------------------------------------*/
uint16_t libModbusCrc16(uint8_t *pFrame, uint16_t length);

#endif  /* __MODBUS_CRC16_H */
