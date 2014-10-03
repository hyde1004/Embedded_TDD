COMPILER = g++

CPPUTEST_HOME = ../cpputest
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

OUTPUT = test

$(OUTPUT): AllTests.cpp add_test.cpp
	$(COMPILER) -o $(OUTPUT) AllTests.cpp add_test.cpp -I$(CPPUTEST_INCLUDE) -L$(CPPUTEST_LIB) -lCppUTest
clean: 
	rm -f $(OUTPUT)
