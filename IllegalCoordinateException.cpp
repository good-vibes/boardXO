#include <iostream>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <string>
using namespace std;

class IllegalCoordinateException {
public:
	
	int c1;
	int c2;
	
	IllegalCoordinateException(int i, int j){
		c1 = i; 
		c2 = j;
	}
	
	string theCoordinate() const{
		return to_string(c1) + "," + to_string(c2);
	}

  
};
