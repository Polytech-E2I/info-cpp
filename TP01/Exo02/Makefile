CC=g++
CFLAGS=-std=c++17 -g -Wall -Wextra -Werror -Weffc++ -Wsign-conversion -pedantic-errors

SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
HEADER_FILES := $(wildcard $(SRC_DIR)/*.h*)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

TARGET=$(shell basename ${PWD})

all: $(TARGET).out

$(TARGET).out: $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_FILES): $(SRC_FILES) $(HEADER_FILES)
	$(CC) $(CFLAGS) -c -o $@ $<
clean:
	$(RM) *.out *.o