CC = g++
CFLAGS = -I../lib/CppUTest/include -I../lib/CppUTest/src -DTESTING
LDFLAGS = -L../lib/CppUTest/lib -lCppUTest

CPPUTEST_HOME = /usr
CFLAGS += -I$(CPPUTEST_HOME)/include
CXXFLAGS += -I$(CPPUTEST_HOME)/include
LD_LIBRARIES = -L$(CPPUTEST_HOME)/lib -lCppUTest -lCppUTestExt

CFLAGS += -I../includes
CXXFLAGS += -I../includes

TARGET = hello_world_test
SRC_FILES = ../src/helloworld.c
TEST_SRC_FILES = hello_world_test.cpp

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(SRC_FILES) $(TEST_SRC_FILES)
	gcc -x c $(CFLAGS) -c $(SRC_FILES) -o helloworld.o
	g++ $(CXXFLAGS) $(TEST_SRC_FILES) helloworld.o -o $@ $(LD_LIBRARIES)

clean:
	rm -f $(TARGET) helloworld.o