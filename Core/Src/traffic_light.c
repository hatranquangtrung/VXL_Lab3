#include <traffic_light.h>

void setOfLight(int lane){
	switch (lane){
	case 1:
		HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
		HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
		HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
		HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
		break;
	}
}

void setLightRed(int lane){
	switch (lane){
	case 1:
		HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, RESET);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
		HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, RESET);
		HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
		HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
		break;
	}
}
void setLightGreen(int lane){
	switch(lane){
	case 1:
		HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, RESET);
		HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
		HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, RESET);
		HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, SET);
		break;
	}
}
void setLightYellow(int lane){
	switch(lane){
	case 1:
		HAL_GPIO_WritePin(R1_GPIO_Port, R1_Pin, SET);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, SET);
		HAL_GPIO_WritePin(Y1_GPIO_Port, Y1_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(R2_GPIO_Port, R2_Pin, SET);
		HAL_GPIO_WritePin(G2_GPIO_Port, G2_Pin, SET);
		HAL_GPIO_WritePin(Y2_GPIO_Port, Y2_Pin, RESET);
		break;
	}
}
