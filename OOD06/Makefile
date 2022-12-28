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

circle.o : circle.cc
	g++ --std=c++17 -c circle.cc -o $@

rectangle.o : rectangle.cc
	g++ --std=c++17 -c rectangle.cc -o $@

triangle.o : triangle.cc
	g++ --std=c++17 -c triangle.cc -o $@

shape_util.o : shape_util.cc
	g++ --std=c++17 -c shape_util.cc -o $@

shapeutil_test.o : shapeutil_test.cc $(GTEST_HEADERS)
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 -c shapeutil_test.cc -o $@

test : shapeutil_test.o circle.o rectangle.o triangle.o shape_util.o gtest_main.a
	g++ $(CPPFLAGS) $(CXXFLAGS) --std=c++17 $^ -o $@

main : main.cc circle.o rectangle.o triangle.o shape_util.o
	g++ --std=c++17 main.cc circle.o rectangle.o triangle.o shape_util.o -o $@

.PHONY: all clean
