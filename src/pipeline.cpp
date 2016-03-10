
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

#include "cmdparser.h"
#include "pipeline.h"

int fd;



void readSender() {
    char * myfifo = "/tmp/baymax-sender";
    char buf[35] = "0";
    fd = open(myfifo, O_RDONLY);
    while(1) {
        read(fd, buf, 35);
        if (buf[0] != '0') {
            int32_t cmd = atoi(buf);
            parseCmd(cmd);
            printf("Received: %d\n", cmd);
            snprintf(buf, 35, "%s", "0");
        } 
    }
    //return atoi(buf);
}
