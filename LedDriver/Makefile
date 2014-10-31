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

$(OUTPUT): $(TEST_DIR) $(CODE_DIR)
	$(COMPILER) -o $(OUTPUT) $(TEST_DIR) $(CODE_DIR) -I$(CODE_INCLUDE) -I$(CPPUTEST_INCLUDE) -I$(INCLUDE)	\
	$(MOCKS_DIR) -I$(MOCKS_INCLUDE)	\
	-L$(CPPUTEST_LIB) -lCppUTest
clean: 
	rm -f $(OUTPUT)
