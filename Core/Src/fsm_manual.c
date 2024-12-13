#include "fsm_manual.h"
int MODE = MODE_1;

void fsm_manual_run(){
	switch (MODE){
	case MODE_1:
		fsm_automatic_run();
		display_7SEG_automatic();
		if (isButton1Pressed()){
			MODE=MODE_2;
			setOfLight(1);
			setOfLight(2);
			delayManual(50);
		}
		break;
	case MODE_2:
		if(timer4_flag==1){
			delayManual(50);
			HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
			HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
		}
		if (isButton2Pressed()){
			count++;
			if (count>99) count=0;
		}
		if (isButton3Pressed()){
			timer_Count(count*100);
		}
			display_manual(2);
		if (isButton1Pressed()){
			MODE=MODE_3;
			setOfLight(1);
			setOfLight(2);
			setTimer1(700);
			count=0;
		}
		break;
	case MODE_3:
		if(timer4_flag==1){
			delayManual(50);
			HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
			HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, RESET);
		}
		if (isButton2Pressed()){
			count++;
			if (count>99) count=0;
		}
			if (isButton3Pressed()){
			timer_Count(count*100);
		}
			display_manual(3);
		if (isButton1Pressed()){
			MODE=MODE_4;
			setOfLight(1);
			setOfLight(2);
			setTimer1(200);
			count=0;
		}
		break;
	case MODE_4:
		if(timer4_flag==1){
			delayManual(50);
			HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);
			HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, RESET);
		}
		if (isButton2Pressed()){
			count++;
			if (count>99) count=0;
		}
		if (isButton3Pressed()){
			timer_Count(count*100);
		}
			display_manual(4);
		if (isButton1Pressed()){
			MODE=MODE_1;
			setOfLight(1);
			setOfLight(2);
			count=0;
		}
		break;
	default: break;
	}
}

