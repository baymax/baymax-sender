#include "init.h"


int initBcm2835() {
    if (!bcm2835_init())
      return 1;
      
    bcm2835_gpio_fsel(SUSPENSION_HIGH_PIN, BCM2835_GPIO_FSEL_OUTP);
    bcm2835_gpio_fsel(SUSPENSION_LOW_PIN, BCM2835_GPIO_FSEL_OUTP);
    
    bcm2835_gpio_fsel(FAN_SPEED_1_PIN, BCM2835_GPIO_FSEL_OUTP);
    bcm2835_gpio_fsel(FAN_SPEED_2_PIN, BCM2835_GPIO_FSEL_OUTP);
    bcm2835_gpio_fsel(FAN_SPEED_3_PIN, BCM2835_GPIO_FSEL_OUTP);
    bcm2835_gpio_fsel(FAN_SPEED_4_PIN, BCM2835_GPIO_FSEL_OUTP);
    
    bcm2835_gpio_fsel(DOWNFORCE_ON_PIN, BCM2835_GPIO_FSEL_OUTP);
    
    bcm2835_gpio_fsel(SPORTMODE_ON_PIN, BCM2835_GPIO_FSEL_OUTP);
}

void closeBcm2835() {
    bcm2835_close();
}