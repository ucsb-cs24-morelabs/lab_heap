CXX_FLAGS = -std=c++11 -Wall

all: test_heap

test_heap: intheap.o main.o
	g++ intheap.o main.o -o test_heap ${CXX_FLAGS}

intheap.o: intheap.cpp intheap.h
	g++ intheap.cpp -c ${CXX_FLAGS}

main.o: main.cpp
	g++ main.cpp -c ${CXX_FLAGS}

clean:
	rm -f *.o
	rm -f test_heap