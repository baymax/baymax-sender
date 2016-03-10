#include "cmdparser.h"
#include <stdio.h>


void parseCmd(int32_t cmd) {
    printf("%d", cmd);
    if ((cmd & SUSPENSION_MODE) > 0) {
        if ((cmd & SUSPENSION_MODE_NORMAL) > 0) {
            setSuspension(1);
        } else if ((cmd & SUSPENSION_MODE_LOW) > 0) {
            setSuspension(0);
        } else if ((cmd & SUSPENSION_MODE_HIGH) > 0) {
            setSuspension(2);
        }
    } if ((cmd & FAN_SPEED) > 0) {
        if ((cmd & FAN_SPEED_0) > 0) {
            setFanSpeed(0);
        } else if ((cmd & FAN_SPEED_1) > 0) {
            setFanSpeed(1);
        } else if ((cmd & FAN_SPEED_2) > 0) {
            setFanSpeed(2);
        } else if ((cmd & FAN_SPEED_3) > 0) {
            setFanSpeed(3);
        } else if ((cmd & FAN_SPEED_4) > 0) {
            setFanSpeed(4);
        }
        
    } if ((cmd & INTERIOR_LIGTH) > 0) {
        if ((cmd & INTERIOR_LIGTH_ON) > 0) {
            setInteriorLight(1);
        } else if ((cmd & INTERIOR_LIGTH_OFF) > 0) {
            setInteriorLight(0);
        }        
    } if ((cmd & SPOILER_MODE) > 0) {
        if ((cmd & SPOILER_MODE_AUTO) > 0) {
            setDownForce(1);
        } else if ((cmd & SPOILER_MODE_OFF) > 0) {
            setDownForce(0);
        }
        
    } if ((cmd & SPORT_MODE > 0)) {
        if ((cmd & SPORT_MODE_ON) > 0) {
            setSportMode(1);
        } else if ((cmd & SPORT_MODE_OFF) > 0) {
            setSportMode(0);
        }
    } if ((cmd & REGENERATION) > 0) {
        if ((cmd & REGENERATION_ON) > 0) {
            
        } else if ((cmd & REGENERATION_OFF) > 0) {
            
        }
    }
}
