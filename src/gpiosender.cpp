#include "gpiosender.h"
#include "gpioconstants.h"
#include "logger.h"
#include <stdio.h>

void setFanSpeed(unsigned char speed) {
    if (speed == 0) {
        bcm2835_gpio_write(FAN_SPEED_1_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_2_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_3_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_4_PIN, LOW);
        fanSpeedChanged(speed);
    }else if (speed == 1) {
        bcm2835_gpio_write(FAN_SPEED_1_PIN, HIGH);
        bcm2835_gpio_write(FAN_SPEED_2_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_3_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_4_PIN, LOW);
        fanSpeedChanged(speed);
    } else if (speed == 2) {
        bcm2835_gpio_write(FAN_SPEED_1_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_2_PIN, HIGH);
        bcm2835_gpio_write(FAN_SPEED_3_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_4_PIN, LOW);
        fanSpeedChanged(speed);
    } else if (speed == 3) {
        bcm2835_gpio_write(FAN_SPEED_1_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_2_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_3_PIN, HIGH);
        bcm2835_gpio_write(FAN_SPEED_4_PIN, LOW);
        fanSpeedChanged(speed);
    } else if (speed == 4) {
        bcm2835_gpio_write(FAN_SPEED_1_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_2_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_3_PIN, LOW);
        bcm2835_gpio_write(FAN_SPEED_4_PIN, HIGH);
        fanSpeedChanged(speed);
    }
}

void setDownForce(unsigned char mode) {
    if (mode == 0) {
        bcm2835_gpio_write(DOWNFORCE_ON_PIN, LOW);
        downForceStateChanged(mode);
    } else if (mode == 1) {
        bcm2835_gpio_write(DOWNFORCE_ON_PIN, HIGH);
        downForceStateChanged(mode);
    }
}

void setSuspension(unsigned char state) {
    if (state == 0) {
        bcm2835_gpio_write(SUSPENSION_LOW_PIN, HIGH);
        bcm2835_gpio_write(SUSPENSION_HIGH_PIN, LOW);
        suspensionHighChanged(state);
    } else if (state == 1) {
        bcm2835_gpio_write(SUSPENSION_LOW_PIN, LOW);
        bcm2835_gpio_write(SUSPENSION_HIGH_PIN, LOW);
        suspensionHighChanged(state);
    } else if (state == 2) {
        bcm2835_gpio_write(SUSPENSION_LOW_PIN, LOW);
        bcm2835_gpio_write(SUSPENSION_HIGH_PIN, HIGH);
        suspensionHighChanged(state);
    }
}

void setSportMode(unsigned char mode) {
    if (mode == 0) {
        bcm2835_gpio_write(SPORTMODE_ON_PIN, LOW);
        sportModeStateChanged(mode);
    } else if (mode == 1) {
        bcm2835_gpio_write(SPORTMODE_ON_PIN, HIGH);
        sportModeStateChanged(mode);
    }
}

void setInteriorLight(unsigned char mode) {
    if (mode == 0) {
        bcm2835_gpio_write(INTERIOR_LIGHT_ON_PIN, LOW);
        interiorStateChaned(mode);
    } else if (mode == 1) {
        bcm2835_gpio_write(INTERIOR_LIGHT_ON_PIN, HIGH);
        interiorStateChaned(mode);
    }
    
}

void setRegeneration(unsigned char state) {
    if (state == 0) {
        bcm2835_gpio_write(REGEN_ON_PIN, LOW);
        regenStateChanged(state);
    } else if (state == 1) {
        bcm2835_gpio_write(REGEN_ON_PIN, HIGH);
        regenStateChanged(state); 
    }
}