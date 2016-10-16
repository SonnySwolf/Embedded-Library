/*******************************************************************************
* 文 件 名: library_common.h
* 创 建 者: Keda Huang
* 版    本: V1.0
* 创建日期: 2016-10-16
* 文件说明: 函数库共有头文件
*******************************************************************************/

#ifndef __LIBRARY_COMMON_H
#define __LIBRARY_COMMON_H

/* 头文件 --------------------------------------------------------------------*/
#include "cpu.h"
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

/* 宏定义 --------------------------------------------------------------------*/
#define libAssert(expr)         debug_assert(expr)

#endif  /* __LIBRARY_COMMON_H */