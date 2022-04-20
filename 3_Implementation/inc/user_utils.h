#ifndef _USER_UTILS_H_
#define _USER_UTILS_H_
/**
 * @file user_utils.h
 * @author JAHNAVI JHA
 * @brief User defined utilities used 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "led.h"
#include <util/delay.h>

/**
 * @brief Function to generate delay in micro seconds
 * 
 * @param[in] delay_time Delay in Micro seconds
 * 
 */
void delay_ms(uint32_t delay_time);

#endif /* _USER_UTILS_H_ */
