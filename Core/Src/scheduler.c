#include "scheduler.h"
sTasks SCH_tasks_G[SCH_MAX_TASKS];
uint8_t current_index_task = 0;

void SCH_Init(void){
	current_index_task=0;
}

unsigned char SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD){
	if (current_index_task < SCH_MAX_TASKS){
		SCH_tasks_G[current_index_task].pTask = pFunction;
		SCH_tasks_G[current_index_task].Delay = DELAY;
		SCH_tasks_G[current_index_task].Period = PERIOD;
		SCH_tasks_G[current_index_task].RunMe = 0;
		SCH_tasks_G[current_index_task].TaskID=current_index_task;
		current_index_task++;
		return 1;
	}
	return 0;
}

void SCH_Update(void){
	for(unsigned char i=0; i<current_index_task; i++){
		if(SCH_tasks_G[i].Delay>0){
			SCH_tasks_G[i].Delay--;
		}else{
			SCH_tasks_G[i].Delay=SCH_tasks_G[i].Period;
			SCH_tasks_G[i].RunMe+=1;
		}
	}
}

void SCH_Dispatch_Tasks(void){
	for(unsigned char i=0; i< SCH_MAX_TASKS;i++){
		if(SCH_tasks_G[i].RunMe>0){
			SCH_tasks_G[i].RunMe--;
			(*SCH_tasks_G[i].pTask)();
		}
	}
}

void SCH_Delete_Tasks(uint32_t TASK_INDEX){
	SCH_tasks_G[TASK_INDEX].pTask = 0x0000;
	SCH_tasks_G[TASK_INDEX].Delay = 0;
	SCH_tasks_G[TASK_INDEX].Period = 0;
	SCH_tasks_G[TASK_INDEX].RunMe = 0;
}
