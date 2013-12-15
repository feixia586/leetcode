CC = $(CXX)

OPT = -O0 -ggdb
WARN = -Wall -Wno-unused-function -finline-functions
INCPATH = -I. -I../third_party/gtest-1.7.0/include
CFLAGS = $(WARN) $(OPT) $(INCPATH)


GTEST = -L../third_party/gtest-1.7.0 -lgtest_main -lgtest -lpthread

OBJECTS = ./0_start/helloworld.o \
		  ./1_TwoSum/TwoSum.o \

TESTS = helloworld_test \
		TwoSum_test \

all: gtest $(OBJECTS) $(TESTS)

$(OBJECTS): %.o: %.cc
	$(CC) $(CFLAGS) -c $< -o $@

gtest:
	cmake ../third_party/gtest-1.7.0/CMakeLists.txt
	make -C ../third_party/gtest-1.7.0/

helloworld_test: 0_start/helloworld_test.cc $(OBJECTS)
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
TwoSum_test: 1_TwoSum/TwoSum_test.cc $(OBJECTS)
	$(CC) $(CFLAGS) $^ $(GTEST) -o $@
clean:
	rm -f */*.o *_test
