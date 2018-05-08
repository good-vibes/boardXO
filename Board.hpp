#include <iostream>
#include <vector>
#include <list>
#include "cell.cpp"
#include "IllegalCoordinateException.cpp"

using namespace std;

class Board{
	public:
		int size;	
		vector<vector<cell> > board;
		Board(int size);
		Board(const Board &b2);
		cell& operator[](list<int> j);
		friend ostream& operator<< (ostream& os, const Board& b);
		Board& operator= (char n);
		
		Board& operator= (Board n);
		
		
};
