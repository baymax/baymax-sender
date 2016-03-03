#include "main.h"
#include "gpiosender.h"
#include "init.h"
#include <stdint.h>
#include <stdio.h>
#include "cmdparser.h"
#include "session.h"


int main() {
    initBcm2835();
    int32_t c;
    setCommandPipePath("piippu");
    while(1) {
        c = readCommandPipeline()
    }
    closeBcm2835();
    return 0;
}
