COMPILER = g++

#CPPUTEST_HOME should be exported!
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

TEST_DIR = test/AllTests.cpp	\
	test/LedDriverTest.cpp

CODE_DIR = src/LedDriver.c

CODE_INCLUDE = src	\

INCLUDE = include

MOCKS_DIR = mocks/RuntimeErrorStub.c

MOCKS_INCLUDE = mocks

OUTPUT = unittest

$(OUTPUT): LedDriverTest.o AllTests.o LedDriver.o RuntimeErrorStub.o
	$(COMPILER) -o $(OUTPUT) LedDriverTest.o AllTests.o LedDriver.o RuntimeErrorStub.o 	\
	-L$(CPPUTEST_LIB) -lCppUTest

LedDriverTest.o: test/LedDriverTest.cpp src/LedDriver.h mocks/RuntimeErrorStub.h
	$(COMPILER) -c test/LedDriverTest.cpp -I./src -I./mocks -I$(CPPUTEST_INCLUDE)

AllTests.o: test/AllTests.cpp
	$(COMPILER) -c test/AllTests.cpp -I$(CPPUTEST_INCLUDE)

LedDriver.o: src/LedDriver.c src/LedDriver.h include/util/RuntimeError.h
	$(COMPILER) -c src/LedDriver.c -I./include

RuntimeErrorStub.o: mocks/RuntimeErrorStub.c mocks/RuntimeErrorStub.h include/util/RuntimeError.h
	$(COMPILER) -c mocks/RuntimeErrorStub.c -I./include 

clean: 
	rm -f $(OUTPUT) *.o
