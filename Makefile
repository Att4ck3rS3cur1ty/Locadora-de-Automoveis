CC := g++
CFLAGS := -std=c++11 -Wall

SRC_DIR := src
INCLUDE_DIR := include
BUILD_DIR := build
BIN_DIR := bin
DATA_DIR := data
DOC_DIR := docs

SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))
EXECUTABLE := $(BIN_DIR)/locadora

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

