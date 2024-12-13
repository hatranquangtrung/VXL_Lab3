#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"
#include "traffic_light.h"
#include "display.h"

#define INIT		1
#define AUTO_RED	2
#define AUTO_GREEN	3
#define AUTO_YELLOW	4

#define MODE_1		12
#define MODE_2		13
#define MODE_3		14
#define MODE_4		15

extern int status1;
extern int status2;
extern int count;

#endif /* INC_GLOBAL_H_ */
