#include "main.h"
#include "gpiosender.h"
#include "init.h"
#include <stdint.h>
#include <stdio.h>
#include "cmdparser.h"


int main() {
    initBcm2835();
    int32_t c;
    scanf("%s", c);
    parseCmd(c);
    
    closeBcm2835();
    return 0;
}