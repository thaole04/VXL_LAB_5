/*
 * controlData.h
 *
 *  Created on: Dec 10, 2023
 *      Author: thao2
 */

#ifndef INC_CONTROLDATA_H_
#define INC_CONTROLDATA_H_

#include <stdio.h>


#define MAX_BUFFER_SIZE 20

// from input from user, we separate it to:
// temp buffer for a new data
extern char temp[1];
// input buffer for input
extern char buffer[MAX_BUFFER_SIZE];
// index in buffer for insert
extern uint8_t index_buffer;
// buffer flag for check new data
extern uint8_t buffer_flag;
// adc value for uart communication
extern uint32_t ADC_Value;
// function to set initial data to buffer or reset data in buffer
void initData();
// function insert data to buffer
void insertBuffer();
#endif /* INC_CONTROLDATA_H_ */
