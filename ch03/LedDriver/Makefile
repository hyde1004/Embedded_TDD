COMPILER = g++

CPPUTEST_HOME = /home/junggu.lee/work/Embedded_TDD/cpputest
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

TEST_SRC = AllTests.cpp	\
	LedDriverTest.cpp

OUTPUT = test

$(OUTPUT): $(TEST_SRC)
	$(COMPILER) -o $(OUTPUT) $(TEST_SRC) -I$(CPPUTEST_INCLUDE) -L$(CPPUTEST_LIB) -lCppUTest
clean: 
	rm -f $(OUTPUT)
