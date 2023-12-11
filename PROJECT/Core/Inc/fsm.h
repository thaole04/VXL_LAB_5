/*
 * fsm.h
 *
 *  Created on: Dec 11, 2023
 *      Author: thao2
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

// variable mode for fsm
extern int command_mode;
extern int communiation_mode;

void command_parser_fsm();
void uart_communication_fsm();

#endif /* INC_FSM_H_ */
