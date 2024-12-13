#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "global.h"

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
extern int timer5_flag;
extern int countdown1;
extern int countdown2;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void delayManual(int duration);
void timer_Count(int duration);

void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
