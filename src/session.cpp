#include "session.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

char *loggerPipePath = NULL;
char *commandPipePath = NULL;

int commandPipeFd;

int32_t readCommandPipeline() {
    char buf[80];
    read(commandPipeFd, buf, 80);
    return atoi(buf);
}

void setLoggerPipePath(const char * path) {
    loggerPipePath = path;
}

void setCommandPipePath(const char * path) {
    commandPipe = open(path, O_RDONLY);
}