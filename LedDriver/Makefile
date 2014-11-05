COMPILER = g++

#CPPUTEST_HOME should be exported!
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

OUTPUT = unittest

# Link
$(OUTPUT): LedDriverTest.o AllTests.o LedDriver.o RuntimeErrorStub.o
	@echo "Linking ..."
	@$(COMPILER) -o $(OUTPUT) LedDriverTest.o AllTests.o LedDriver.o RuntimeErrorStub.o 	\
	-L$(CPPUTEST_LIB) -lCppUTest
	@echo

# Compile
LedDriverTest.o: test/LedDriverTest.cpp src/LedDriver.h mocks/RuntimeErrorStub.h
	@echo "Compile test/LedDriverTest.cpp ..."
	@$(COMPILER) -c test/LedDriverTest.cpp -I./src -I./mocks -I$(CPPUTEST_INCLUDE)

AllTests.o: test/AllTests.cpp
	@echo "Compile test/AllTests.cpp ..."
	@$(COMPILER) -c test/AllTests.cpp -I$(CPPUTEST_INCLUDE)

LedDriver.o: src/LedDriver.c src/LedDriver.h include/util/RuntimeError.h
	@echo "Compile src/LedDriver.c ..."
	@$(COMPILER) -c -Wno-deprecated src/LedDriver.c -I./include

RuntimeErrorStub.o: mocks/RuntimeErrorStub.c mocks/RuntimeErrorStub.h include/util/RuntimeError.h
	@echo "Compile mocks/RuntimeErrorStub.c ..."
	@$(COMPILER) -c -Wno-deprecated mocks/RuntimeErrorStub.c -I./include 

clean: 
	@echo "Cleaning object files ..."
	@rm -f $(OUTPUT) *.o
	@echo
