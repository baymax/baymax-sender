#include "cmdparser.h"
#include <stdio.h>
#include "cmdconst.h"
#include "pipeline.h"
#include "gpiosender.h"


void parseCmd(unsigned char cmd, unsigned char data) {
    switch (cmd) {
        case FAN_SPEED:
            printf("Setting fan speed to %d", data);
            #ifndef X86
                setFanSpeed(data);
            #endif
            sendLogger(cmd, data);
            break;
        case SUSPENSION_MODE:
            printf("Setting suspension mode to %d", data);
            #ifndef X86
                setSuspension(data);
            #endif
            sendLogger(cmd, data);
            break;
            
        case INTERIOR_LIGTH:
            printf("Setting interior ligth to %d", data);
            #ifndef X86
                setInteriorLight(data);
            #endif
            sendLogger(cmd, data);
            break;
        
        case SPOILER_MODE:
            printf("Setting spoiler mode to %d", data);
            #ifndef X86
                setDownForce(data);
            #endif
            sendLogger(cmd, data);
            break;
        
        case SPORT_MODE:
            printf("Setting sport mode to %d", data);
            #ifndef X86
                setSportMode(data);
            #endif
            sendLogger(cmd, data);
            break;
        
        case REGENERATION:
            printf("Setting regeneration to %d", data);
            #ifndef X86
                setRegeneration(data);
            #endif
            sendLogger(cmd, data);
            break;
        
        default:
            printf("Invalid command");
            break;
    }
}

/*void parseCmd(int32_t cmd) {
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
}*/
