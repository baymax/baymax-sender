#ifndef INIT_H
#define INIT_H

#include <bcm2835.h>
#include "gpioconstants.h"

int initBcm2835();
void closeBcm2835();

#endif // INIT_H
