CXX = g++

SOURCES = main.cpp

LINKER_FLAGS = -lSDL2

TARGET = demo

all:
	$(CXX) $(SOURCES) $(COMPILER_FLAGS) -o $(TARGET)
