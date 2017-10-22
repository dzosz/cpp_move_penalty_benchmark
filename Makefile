
CXXFLAGS=-O2 -g
CXX=g++
#CXX=clang++

all:
	$(CXX) mylib.cpp -shared -o libmylib.so -fPIC -std=c++11 $(CXXFLAGS)
	$(CXX) -o bench bench.cpp -L. -lmylib -lbenchmark -std=c++11 -pthread $(CXXFLAGS)
