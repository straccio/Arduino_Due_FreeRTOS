/**
 * \file
 * \brief FreeRTOS for Teensy 3.x and Due
 */
#ifndef Arduino_due_FreeRTOS_h
#define Arduino_due_FreeRTOS_h

#ifndef __arm__
#error ARM Due or Teensy 3.x required
#else  // __arm__
//------------------------------------------------------------------------------
/** FreeRTOS_ARM version YYYYMMDD */
#define FREE_RTOS_ARM_VERSION 20151113
//------------------------------------------------------------------------------
#include "utility/FreeRTOS.h"
#include "utility/task.h"
#include "utility/queue.h"
#include "utility/semphr.h"
#include "utility/portmacro.h"
//#include "utility/cmsis_os.h"
#endif  // __arm__
#endif  // Arduino_due_FreeRTOS_h
