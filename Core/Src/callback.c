/*
 * callback.c
 *
 *  Created on: Jul 17, 2023
 *      Author: antotauv
 */
#include "nmea_frames.h"
#include "stdio.h"

extern LOCATION_TYPE location;

extern const NMEA_FRAME_TYPE nmea_frame_array[LOCATION_SIZE];

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin){

	location=(location+1)%LOCATION_SIZE;
	printf("Entering mode #%d : %s \n\r",location,nmea_frame_array[location].name);
}
