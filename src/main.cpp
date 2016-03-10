#include "main.h"
#include "gpiosender.h"
#include "init.h"
#include <stdint.h>
#include <stdio.h>
#include "cmdparser.h"
#include "session.h"
#include "pipeline.h"


int main() {
    //
    initBcm2835();
    readSender();
    
    closeBcm2835();
    return 0;
}
