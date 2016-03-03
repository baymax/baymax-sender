
#include <bcm2835.h>

#define SUSPENSION_HIGH_PIN RPI_GPIO_P1_10 // GPIO 15
#define SUSPENSION_LOW_PIN RPI_GPIO_P1_11 // GPIO 17

#define FAN_SPEED_1_PIN RPI_GPIO_P1_12 // GPIO 18
 // Blinks on RPi Plug P1 pin 11 (which is GPIO pin 17)
#define FAN_SPEED_2_PIN RPI_GPIO_P1_13 // GPIO 27
#define FAN_SPEED_3_PIN RPI_GPIO_P1_15 // GPIO 22
#define FAN_SPEED_4_PIN RPI_GPIO_P1_16 // GPIO 23

#define DOWNFORCE_ON_PIN RPI_GPIO_P1_07 // GPIO 4

#define SPORTMODE_ON_PIN RPI_GPIO_P1_08 // GPIO 14

#define INTERIOR_LIGHT_ON_PIN RPI_GPIO_P1_03 // GPIO 2

#define REGEN_ON_PIN RPI_GPIO_P1_05 // GPIO 3