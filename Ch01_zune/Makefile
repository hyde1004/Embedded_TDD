UNITY_ROOT = ../../Unity-master
SRC_FILES = RtcTime.c

UNITY_SRC = \
	-I$(UNITY_ROOT)/extras/fixture/src 	\
	-I$(UNITY_ROOT)/src 	\
	$(UNITY_ROOT)/src/unity.c \
	$(UNITY_ROOT)/extras/fixture/src/unity_fixture.c

TEST_SRC = \
	test/all_test.c \
	test/TestZune.c \
	test/TestZune_Runner.c

TARGET = TestZune

all: clean default

default:
	gcc -o $(TARGET) $(SRC_FILES) $(UNITY_SRC) $(TEST_SRC)

clean:
	rm -f *.o $(TARGET)