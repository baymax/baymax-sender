#include "cmdparser.h"



void parseCmd(int32_t cmd) {
    if ((cmd & SUSPENSION_MODE)) {
        if (cmd & SUSPENSION_MODE_NORMAL) {
            setSuspension(1);
        } else if (cmd & SUSPENSION_MODE_LOW) {
            setSuspension(0);
        } else if (cmd & SUSPENSION_MODE_HIGH) {
            setSuspension(2);
        }
    }
}