#include "cmdparser.h"



void parseCmd(int32_t cmd) {
    if ((cmd & SUSPENSION_MODE) > 0) {
        if ((cmd & SUSPENSION_MODE_NORMAL) > 0) {
            setSuspension(1);
        } else if ((cmd & SUSPENSION_MODE_LOW) > 0) {
            setSuspension(0);
        } else if ((cmd & SUSPENSION_MODE_HIGH) > 0) {
            setSuspension(2);
        }
    }
}