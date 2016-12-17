/*
 * led.h
 *
 *  Created on: 17. 12. 2016
 *      Author: Patrik Bakyta
 */

#ifndef LED_H_
#define LED_H_


void initSYSTEMCLOCK(void);

void initUSART(void);
extern "C" void USART1_IRQHandler(void);

void initPWM(void);
void Delay(uint32_t nCount);


#endif /* LED_H_ */
