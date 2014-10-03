COMPILER = g++

CPPUTEST_HOME = /home/junggu.lee/work/Embedded_TDD/cpputest
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

TEST_DIR = test/LedDriver/AllTests.cpp	\
	test/LedDriver/LedDriverTest.cpp

CODE_DIR = src/LedDriver/LedDriver.c

CODE_INCLUDE = src/LedDriver

OUTPUT = unittest

$(OUTPUT): $(TEST_DIR) $(CODE_DIR)
	$(COMPILER) -o $(OUTPUT) $(TEST_DIR) $(CODE_DIR) -I$(CODE_INCLUDE) -I$(CPPUTEST_INCLUDE) -L$(CPPUTEST_LIB) -lCppUTest
clean: 
	rm -f $(OUTPUT)
