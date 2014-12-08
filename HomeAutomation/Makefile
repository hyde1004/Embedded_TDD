COMPILER = g++

#CPPUTEST_HOME should be exported!
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

OUTPUT = unittest

# Link
$(OUTPUT): LightControllerSpy.o LightSchedulerSpyTest.o AllTests.o 
	@echo "Linking ..."
	@$(COMPILER) -o $(OUTPUT) LightControllerSpy.o AllTests.o LightSchedulerSpyTest.o \
	-L$(CPPUTEST_LIB) -lCppUTest
	@echo

# Compile
LightControllerSpy.o: LightControllerSpy.c LightControllerSpy.h LightController.h
	@echo "Compile LightControllerSpy.c ..."
	@$(COMPILER) -c -Wno-deprecated LightControllerSpy.c -I.

LightSchedulerSpyTest.o: LightSchedulerSpyTest.cpp LightControllerSpy.h
	@echo "Compile LightSchedulerSpyTest.cpp ..."
	@$(COMPILER) -c  LightSchedulerSpyTest.cpp -I. -I$(CPPUTEST_INCLUDE)

AllTests.o: AllTests.cpp
	@echo "Compile AllTests.cpp ..."
	@$(COMPILER) -c AllTests.cpp -I$(CPPUTEST_INCLUDE)

clean: 
	@echo "Cleaning object files ..."
	@rm -f $(OUTPUT) *.o
	@echo
