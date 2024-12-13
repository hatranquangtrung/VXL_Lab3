#include "fsm_automatic.h"

void fsm_automatic_run(){
	switch (status1){
			case INIT:
				setOfLight(1);
				status1 = AUTO_RED;
				setTimer1(red*100);
				break;
			case AUTO_RED:
				if (timer1_flag==1){
					status1 = AUTO_GREEN;
					setTimer1(green*100);
				}
				setLightRed(1);
				break;
			case AUTO_GREEN:
				if (timer1_flag==1){
					status1 = AUTO_YELLOW;
					setTimer1(yellow*100);
				}
				setLightGreen(1);
				break;
			case AUTO_YELLOW:
				if (timer1_flag==1){
					status1 = AUTO_RED;
					setTimer1(red*100);
				}
				setLightYellow(1);
				break;
			default:
				break;
			}
	switch (status2){
		case INIT:
			setOfLight(2);
			status2 = AUTO_RED;
			setTimer2(red*100);
			break;
		case AUTO_RED:
			if (timer2_flag==1){
				status2 = AUTO_GREEN;
				setTimer2(green*100);
			}
			setLightRed(2);
			break;
		case AUTO_GREEN:
			if (timer2_flag==1){
				status2 = AUTO_YELLOW;
				setTimer2(yellow*100);
			}
			setLightGreen(2);
			break;
		case AUTO_YELLOW:
			if (timer2_flag==1){
				status2 = AUTO_RED;
				setTimer2(red*100);
			}
			setLightYellow(2);
			break;
		default:
			break;
		}
}
