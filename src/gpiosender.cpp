#include "gpiosender.h"
#include "gpioconstants.h"
#include "logger.h"


void setFanSpeed(unsigned char speed) {
    if (speed == 1) {
        bcm2835_gpio_write(FAN_SEED_1_PIN, HIGH);
        bcm2835_gpio_write(FAN_SEED_2_PIN, LOW);
        bcm2835_gpio_write(FAN_SEED_3_PIN, LOW);
        bcm2835_gpio_write(FAN_SEED_4_PIN, LOW);
        fanSpeedChanged(speed);
    } else if (speed == 2) {
        bcm2835_gpio_write(FAN_SEED_1_PIN, LOW);
        bcm2835_gpio_write(FAN_SEED_2_PIN, HIGH);
        bcm2835_gpio_write(FAN_SEED_3_PIN, LOW);
        bcm2835_gpio_write(FAN_SEED_4_PIN, LOW);
        fanSpeedChanged(speed);
    } else if (speed == 3) {
        bcm2835_gpio_write(FAN_SEED_1_PIN, LOW);
        bcm2835_gpio_write(FAN_SEED_2_PIN, LOW);
        bcm2835_gpio_write(FAN_SEED_3_PIN, HIGH);
        bcm2835_gpio_write(FAN_SEED_4_PIN, LOW);
        fanSpeedChanged(speed);
    } else if (speed == 4) {
        bcm2835_gpio_write(FAN_SEED_1_PIN, LOW);
        bcm2835_gpio_write(FAN_SEED_2_PIN, LOW);
        bcm2835_gpio_write(FAN_SEED_3_PIN, LOW);
        bcm2835_gpio_write(FAN_SEED_4_PIN, HIGH);
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
    } else if (mode == 1) {
        bcm2835_gpio_write(SPORTMODE_ON_PIN, HIGH);
    }
}