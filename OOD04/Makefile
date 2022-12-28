GTEST_DIR = /Users/jangjinyoung/CNU_CSE/OOD/googletest/googletest

CPPFLAGS += -isystem $(GTEST_DIR)/include

CXXFLAGS += -std=c++17

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
            $(GTEST_DIR)/include/gtest/internal/*.h

GTEST_SRCS_ = $(GTEST_DIR)/src/*.cc $(GTEST_DIR)/src/*.h $(GTEST_HEADERS)

all : main

clean:
	rm -f gtest.a gtest_main.a *.o main test

gtest-all.o: $(GTEST_SRCS_)
	g++ $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c\
	   $(GTEST_DIR)/src/gtest-all.cc
   
gtest_main.o : $(GTEST_SRCS_)
	g++ $(CPPFLAGS) -I$(GTEST_DIR) $(CXXFLAGS) -c\
      $(GTEST_DIR)/src/gtest_main.cc

gtest.a : gtest-all.o
	$(AR) $(ARFLAGS) $@ $^

gtest_main.a : gtest-all.o gtest_main.o
	$(AR) $(ARFLAGS) $@ $^

int_acc.o : int_acc.cc
	g++ --std=c++17 -c int_acc.cc -o $@

float_acc.o : float_acc.cc
	g++ --std=c++17 -c float_acc.cc -o $@

accumulator_test.o : accmulator_test.cc $(GTEST_HEADERS)
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 -c accmulator_test.cc -o $@

test: int_acc.o float_acc.o accmulator_test.o gtest_main.a
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 $^ -o $@

.PHONY: all 
