COMPILER = g++

#CPPUTEST_HOME should be exported!
CPPUTEST_HOME = ../../cpputest-3.7dev
CPPUTEST_LIB = $(CPPUTEST_HOME)/lib
CPPUTEST_INCLUDE = $(CPPUTEST_HOME)/include

OUTPUT = unittest

# Link
$(OUTPUT): LightControllerSpyTest.o LightControllerSpy.o LightSchedulerTest.o \
	FakeTimeServiceTest.o FakeTimeService.o LightScheduler.o AllTests.o 
	@echo "Linking ..."
	@$(COMPILER) -o $(OUTPUT) LightControllerSpyTest.o LightControllerSpy.o \
	LightSchedulerTest.o LightScheduler.o FakeTimeServiceTest.o FakeTimeService.o AllTests.o \
	-L$(CPPUTEST_LIB) -lCppUTest
	@echo

# Compile
LightSchedulerSpyTest.o: LightSchedulerSpyTest.cpp LightControllerSpy.h
	@echo "Compile LightSchedulerSpyTest.cpp ..."
	@$(COMPILER) -c  LightSchedulerSpyTest.cpp -I. -I$(CPPUTEST_INCLUDE)

LightControllerSpyTest.o: LightControllerSpyTest.cpp LightControllerSpy.h
	@echo "Compile LightControllerSpyTest.cpp ..."
	@$(COMPILER) -c  LightControllerSpyTest.cpp -I. -I$(CPPUTEST_INCLUDE)

FakeTimeServiceTest.o: FakeTimeServiceTest.cpp FakeTimeService.h
	@echo "Compile FakeTimeServiceTest.cpp ..."
	@$(COMPILER) -c  FakeTimeServiceTest.cpp -I. -I$(CPPUTEST_INCLUDE)

FakeTimeService.o: FakeTimeService.c FakeTimeService.h
	@echo "Compile FakeTimeService.c ..."
	@$(COMPILER) -c -Wno-deprecated FakeTimeService.c -I. -I$(CPPUTEST_INCLUDE)

LightControllerSpy.o: LightControllerSpy.c LightControllerSpy.h LightController.h
	@echo "Compile LightControllerSpy.c ..."
	@$(COMPILER) -c -Wno-deprecated LightControllerSpy.c -I.

LightSchedulerTest.o: LightSchedulerTest.cpp LightController.h
	@echo "Compile LightSchedulerTest.cpp ..."
	@$(COMPILER) -c LightSchedulerTest.cpp -I. -I$(CPPUTEST_INCLUDE)

LightScheduler.o: LightScheduler.c LightController.h
	@echo "Compile LightScheduler.c ..."
	@$(COMPILER) -c -Wno-deprecated LightScheduler.c -I. -I$(CPPUTEST_INCLUDE)

AllTests.o: AllTests.cpp
	@echo "Compile AllTests.cpp ..."
	@$(COMPILER) -c AllTests.cpp -I$(CPPUTEST_INCLUDE)

clean: 
	@echo "Cleaning object files ..."
	@rm -f $(OUTPUT) *.o
	@echo
