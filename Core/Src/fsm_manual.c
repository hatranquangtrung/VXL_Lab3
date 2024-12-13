#include "fsm_manual.h"
int MODE = MODE_1;
int tempred=0;
int tempgreen=0;
int tempyellow=0;

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
			HAL_GPIO_TogglePin(R1_GPIO_Port, R1_Pin);
			HAL_GPIO_TogglePin(R2_GPIO_Port, R2_Pin);
			delayManual(50);
		}
		if (isButton2Pressed()){
			tempred++;
			if (tempred>99) tempred=0;
		}
		if (isButton3Pressed()){
			red=tempred;
		}
			display_manual(2,tempred);
		if (isButton1Pressed()){
			MODE=MODE_3;
			setOfLight(1);
			setOfLight(2);
			delayManual(50);
		}
		break;
	case MODE_3:
		if(timer4_flag==1){
			HAL_GPIO_TogglePin(G1_GPIO_Port, G1_Pin);
			HAL_GPIO_TogglePin(G2_GPIO_Port, G2_Pin);
			delayManual(50);
		}
		if (isButton2Pressed()){
			tempgreen++;
			if (tempgreen>99) tempgreen=0;
		}
			if (isButton3Pressed()){
			green=tempgreen;
		}
			display_manual(3, tempgreen);
		if (isButton1Pressed()){
			MODE=MODE_4;
			setOfLight(1);
			setOfLight(2);
		}
		break;
	case MODE_4:
		if(timer4_flag==1){
			HAL_GPIO_TogglePin(Y1_GPIO_Port, Y1_Pin);
			HAL_GPIO_TogglePin(Y2_GPIO_Port, Y2_Pin);
			delayManual(50);
		}
		if (isButton2Pressed()){
			tempyellow++;
			if (tempyellow>99) tempyellow=0;
		}
		if (isButton3Pressed()){
			yellow=tempyellow;
		}
			display_manual(4,tempyellow);
		if (isButton1Pressed()){
			MODE=MODE_1;
			setOfLight(1);
			setOfLight(2);
		}
		break;
	default: break;
	}
}

