#include "main.h"
#include "gpiosender.h"
#include "init.h"
#include <stdint.h>
#include <stdio.h>
#include "cmdparser.h"


int main() {
    initBcm2835();
    int32_t c;
<<<<<<< HEAD
    while(1) {
    scanf("%s", c);
=======
    scanf("%d", &c);
>>>>>>> 6006a63db240e9a3a2f9910231988fecf479b111
    parseCmd(c);
    }
    closeBcm2835();
    return 0;
}
