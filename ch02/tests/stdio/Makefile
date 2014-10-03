COMPILER = g++

CPPUTEST_HOME = /home/junggu.lee/work/Embedded_TDD/cpputest
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

OUTPUT = test

$(OUTPUT): AllTests.cpp SprintfTest.cpp
	$(COMPILER) -o $(OUTPUT) AllTests.cpp SprintfTest.cpp -I$(CPPUTEST_INCLUDE) -L$(CPPUTEST_LIB) -lCppUTest
clean: 
	rm -f $(OUTPUT)
