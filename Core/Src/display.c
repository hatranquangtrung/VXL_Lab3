#include"display.h"
int automatic_7SEG = E01;
void display7SEG1 (int counter){
  	switch(counter){
  	case 0:{
  		HAL_GPIO_WritePin(s0_GPIO_Port, s0_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_SET);
  		break;
  			}
  	case 1:{
  		HAL_GPIO_WritePin(s0_GPIO_Port, s0_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_SET);
  		break;
  		}
  	case 2:{
  		HAL_GPIO_WritePin(s0_GPIO_Port, s0_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 3:{
  		HAL_GPIO_WritePin(s0_GPIO_Port, s0_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 4:{
  		HAL_GPIO_WritePin(s0_GPIO_Port, s0_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 5:{
  		HAL_GPIO_WritePin(s0_GPIO_Port, s0_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 6:{
  		HAL_GPIO_WritePin(s0_GPIO_Port, s0_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 7:{
  		HAL_GPIO_WritePin(s0_GPIO_Port, s0_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_SET);
  		break;
  		}
  	case 8:{
  		HAL_GPIO_WritePin(s0_GPIO_Port, s0_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 9:{
  		HAL_GPIO_WritePin(s0_GPIO_Port, s0_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	}
 }

void display7SEG2 (int counter){
  	switch(counter){
  	case 0:{
  		HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s13_GPIO_Port, s13_Pin, GPIO_PIN_SET);
  		break;
  			}
  	case 1:{
  		HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s13_GPIO_Port, s13_Pin, GPIO_PIN_SET);
  		break;
  		}
  	case 2:{
  		HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s13_GPIO_Port, s13_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 3:{
  		HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s13_GPIO_Port, s13_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 4:{
  		HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s13_GPIO_Port, s13_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 5:{
  		HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s13_GPIO_Port, s13_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 6:{
  		HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s13_GPIO_Port, s13_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 7:{
  		HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s13_GPIO_Port, s13_Pin, GPIO_PIN_SET);
  		break;
  		}
  	case 8:{
  		HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s13_GPIO_Port, s13_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	case 9:{
  		HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, GPIO_PIN_SET);
  		HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, GPIO_PIN_RESET);
  		HAL_GPIO_WritePin(s13_GPIO_Port, s13_Pin, GPIO_PIN_RESET);
  		break;
  		}
  	}
 }

void display_7SEG_automatic()
{
	switch(automatic_7SEG){
	case E01:
		HAL_GPIO_WritePin(E0_GPIO_Port, E0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E1_GPIO_Port, E1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E2_GPIO_Port, E2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E3_GPIO_Port, E3_Pin, GPIO_PIN_SET);
		display7SEG1(0);
		display7SEG2(0);
		if(timer3_flag == 1)
		{
			setTimer3(50);
			automatic_7SEG = E12;
		}
		break;
	case E12:
		HAL_GPIO_WritePin(E0_GPIO_Port, E0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E1_GPIO_Port, E1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E2_GPIO_Port, E2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E3_GPIO_Port, E3_Pin, GPIO_PIN_RESET);
		display7SEG1(countdown1);
		display7SEG2(countdown2);
		if(timer3_flag == 1)
		{
			setTimer3(50);
			automatic_7SEG = E01;
		}
		break;
	default:
		break;
	}

}

void display_manual(int MODE, int temp){
	switch(automatic_7SEG){
	case E01:
		HAL_GPIO_WritePin(E0_GPIO_Port, E0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E1_GPIO_Port, E1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E2_GPIO_Port, E2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E3_GPIO_Port, E3_Pin, GPIO_PIN_SET);
		display7SEG1(temp/10);
		display7SEG2(0);
		if(timer3_flag == 1)
		{
			setTimer3(50);
			automatic_7SEG = E12;
		}
		break;
	case E12:
		HAL_GPIO_WritePin(E0_GPIO_Port, E0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E1_GPIO_Port, E1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(E2_GPIO_Port, E2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(E3_GPIO_Port, E3_Pin, GPIO_PIN_RESET);
		display7SEG1(temp%10);
		display7SEG2(MODE);
		if(timer3_flag == 1)
		{
			setTimer3(50);
			automatic_7SEG = E01;
		}
		break;
	default:
		break;
	}
}
