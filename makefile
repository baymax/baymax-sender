CC = g++

CFLAGS =  -Iheader/
LDFLAGS = 

HEADER_DIR = header/
SRC_DIR = src/
OBJ_DIR = obj/

HEADER_FILES = $(HEADER_DIR)*.h
SOURCE_FILES = $(SRC_DIR)*.cpp
OBJ_FILES = $(OBJ_DIR)*.o

EXECUTABLE = baymax-io-sender

all: $(EXECUTABLE)

$(OBJ_DIR)bcm2835.o: $(SRC_DIR)bcm2835.cpp $(HEADER_DIR)bcm2835.h
	$(CC) -c -o $@ $< $(CFLAGS)
    
$(OBJ_DIR)cmdparser.o: $(SRC_DIR)cmdparser.cpp $(HEADER_DIR)cmdparser.h $(OBJ_DIR)gpiosender.o
	$(CC) -c -o $@ $< $(CFLAGS)

$(OBJ_DIR)gpiosender.o: $(SRC_DIR)gpiosender.cpp $(HEADER_DIR)gpiosender.h
	$(CC) -c -o $@ $< $(CFLAGS)

$(OBJ_DIR)init.o: $(SRC_DIR)init.cpp $(HEADER_DIR)init.h
	$(CC) -c -o $@ $< $(CFLAGS)

$(OBJ_DIR)logger.o: $(SRC_DIR)logger.cpp $(HEADER_DIR)logger.h
	$(CC) -c -o $@ $< $(CFLAGS)

$(OBJ_DIR)pipeparser.o: $(SRC_DIR)pipeparser.cpp $(HEADER_DIR)pipeparser.h
	$(CC) -c -o $@ $< $(CFLAGS)

$(OBJ_DIR)session.o: $(SRC_DIR)session.cpp $(HEADER_DIR)session.h
	$(CC) -c -o $@ $< $(CFLAGS)


$(OBJ_DIR)main.o: $(SRC_DIR)main.cpp #$(OBJ_DIR)fan.o
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXECUTABLE): $(OBJ_DIR)main.o
	$(CC) $(LDFLAGS) $(OBJ_FILES) -o executable/$(EXECUTABLE)
    

run:
	./executable/$(EXECUTABLE)

debug: $(EXECUTABLE) run