COMPILER = g++

CPPUTEST_HOME = ../../cpputest
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib/mac_os
#CPPUTEST_LIB = $(CPPUTEST_HOME)/lib/linux
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

TEST_DIR = test/AllTests.cpp	\
	test/LedDriverTest.cpp

CODE_DIR = src/LedDriver.c

CODE_INCLUDE = src

OUTPUT = unittest

$(OUTPUT): $(TEST_DIR) $(CODE_DIR)
	$(COMPILER) -o $(OUTPUT) $(TEST_DIR) $(CODE_DIR) -I$(CODE_INCLUDE) -I$(CPPUTEST_INCLUDE) -L$(CPPUTEST_LIB) -lCppUTest
clean: 
	rm -f $(OUTPUT)
