CC=g++

CFLAGS=-std=c++17 -g -Wall -Wextra -Werror -Weffc++ -Wsign-conversion -pedantic-errors

TARGET=$(shell basename ${PWD})

all: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $(TARGET).out main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
clean:
	$(RM) *.out *.o