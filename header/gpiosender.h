#include <bcm2835.h>
#include "gpioconstants.h"

// Set desired fan speed 1-4
void setFanSpeed(unsigned char speed);
// Sets spoiler to 0 off and 1 to auto
void setDownForce(unsigned char mode);
// Sets desired suspension hight 1-3
void setSuspension(unsigned char state);
// Sets sportmode 1 on 0 off
void setSportMode(unsigned char mode);
// Sets interior ligth 1 on 0 off
void setInteriorLight(unsigned char mode);
// Sets motor regeneration 1 on 0 off
void setRegeneration(unsigned char state);