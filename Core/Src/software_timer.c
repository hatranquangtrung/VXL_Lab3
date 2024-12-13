#include "global.h"

int timer1_counter = 0;
int timer2_counter = 0;
int timer3_counter = 0;
int timer4_counter = 0;
int timer5_counter = 0;
int timer_count = 0;
int timer1_flag = 0;
int timer2_flag = 0;
int timer3_flag = 1;
int timer4_flag = 0;
int timer5_flag = 0;
int countdown1 = 0;
int countdown2 = 0;

void setTimer1 ( int duration ) {
	timer1_counter = duration;
	countdown1=duration/100;
	timer1_flag = 0;
}
void setTimer2 ( int duration ) {
	timer2_counter = duration;
	countdown2=duration/100;
	timer2_flag = 0;
}
void setTimer3 ( int duration ) {
	timer3_counter = duration;
	timer3_flag = 0;
}
void delayManual ( int duration ) {
	timer4_counter = duration;
	timer4_flag = 0;
}
void timer_Count ( int duration ) {
	timer5_counter = duration;
	timer5_flag = 0;
}
void timer_run () {
	if( timer1_counter > 0) {
		timer1_counter --;
		if(timer1_counter%100==0)
			countdown1--;
		if( timer1_counter == 0)
			timer1_flag = 1;
	}
	if( timer2_counter > 0) {
		timer2_counter --;
		if(timer2_counter%100==0)
			countdown2--;
		if( timer2_counter == 0)
			timer2_flag = 1;
		}
	if( timer3_counter > 0) {
		timer3_counter --;
		if( timer3_counter == 0)
			timer3_flag = 1;
		}
	if( timer4_counter > 0) {
		timer4_counter --;
		if( timer4_counter == 0)
			timer4_flag = 1;
		}
	if( timer5_counter > 0) {
		timer5_counter --;
		if(timer5_counter%100==0)
			count--;
		if( timer5_counter == 0)
			timer5_flag = 1;
		}
}
