#include "cmdparser.h"
#include <stdio.h>


void parseCmd(int32_t cmd) {
	//printf("rreaarr");
    //if ((cmd & SUSPENSION_MODE)>0) {
        printf("%d=%d %d",cmd, SUSPENSION_MODE_LOW,  cmd & SUSPENSION_MODE_LOW);
	//setSuspension(0);
	if ((cmd & SUSPENSION_MODE_NORMAL) > 0) {
            printf("1");
		setSuspension(1);
        } else if ((cmd & SUSPENSION_MODE_LOW) > 0) {
            printf("0");
		setSuspension(0);
        } else if ((cmd & SUSPENSION_MODE_HIGH) > 0) {
		printf("2");            
setSuspension(2);
        }
    //}
}
