#include <iostream>
#include "IllegalCharException.cpp"
using namespace std;

class cell{
	public:
	int row;
	int col;
	char c;
	
	cell(int i, int j, char c){
		this->row = i;
		this->col = j;
		this->c = c;
	}
	
	cell& operator= (char n){
		if(n!='O' && n!='X' && n!='.'){
			IllegalCharException ie(n);
			throw ie;
		}
		
		
		this->c = n;
		return *this;
	}
	
	//char operator= (cell& ce){
	//	this->c = n;
		//return this->c;
//	}
	
	 operator char() {
		 return this->c; 
	}
	

	
	
	friend ostream& operator<< (ostream& os, const cell& ce){
		os << ce.c;	
		return os ;

	}



};