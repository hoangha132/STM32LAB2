/*
 * display7seg.h
 *
 *  Created on: Oct 3, 2024
 *      Author: Welcome
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_

#include "main.h"

void display7seg(int num);
void update7SEG(int index);
void updateClockBuffer(int hour, int minute);

#endif /* INC_DISPLAY7SEG_H_ */
