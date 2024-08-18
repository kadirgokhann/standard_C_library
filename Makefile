# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
SRC_DIR = src
BUILD_DIR = build
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILES))


# Default target
exe: $(OBJ_FILES) lib/libstd_c_funcs.a
	$(CXX) $(CXXFLAGS) lib/libstd_c_funcs.a main.cpp $(OBJ_FILES) -o main

lib/libstd_c_funcs.a : $(OBJ_FILES)
	ar rcs lib/libstd_c_funcs.a $(OBJ_FILES)

all: $(BUILD_DIR) $(OBJ_FILES)

# Rule to create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Rule to compile each .cpp file into .o file
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(BUILD_DIR)/*.o
	rm -f lib/libstd_c_funcs.a
	rm -f main

.PHONY: all clean
