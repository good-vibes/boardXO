CXX=clang++-5.0
CXXFLAGS=-std=c++17 

all: main.o Board.o IllegalCharException.o IllegalCoordinateException.o cell.o
	$(CXX) $(CXXFLAGS) Board.o
	./a.out
	
IllegalCharException.o: IllegalCharException.cpp
	$(CXX) $(CXXFLAGS) -c IllegalCharException.cpp -o IllegalCharException.o
	
IllegalCoordinateException.o: IllegalCoordinateException.cpp
	$(CXX) $(CXXFLAGS) -c IllegalCoordinateException.cpp -o IllegalCoordinateException.o
	
cell.o: cell.cpp
	$(CXX) $(CXXFLAGS) -c cell.cpp -o cell.o
	
Board.o: Board.cpp Board.hpp
	$(CXX) $(CXXFLAGS) -c Board.cpp -o Board.o



