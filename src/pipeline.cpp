
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

#include "cmdparser.h"
#include "pipeline.h"

char * senderPipePath = "/tmp/baymax-sender";
char * loggerPipePath = "/tmp/baymax-logger";


void readSender() {  
    int fd;
    char buf[3] = "0";
    fd = open(senderPipePath , O_RDONLY);
    unsigned char cmd;
    unsigned char data;
    while(1) {
        read(fd, buf, 35);
        if (buf[0] != '0') {
            cmd = buf[0];
            data = buf[1];
            parseCmd(cmd, data);
            printf("Received: %d\n", cmd);
            snprintf(buf, 35, "%s", "0");
        } 
    }
    //return atoi(buf);
}

void sendLogger(unsigned char cmd, unsigned char data) {
    mkfifo(loggerPipePath, 0666);
    int fd = open(loggerPipePath, O_WRONLY);
    char buff[3];
    snprintf(buff, 35, "%c%c", cmd, data);
    write(fd, buff, sizeof(buff));
}