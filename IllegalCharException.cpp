#include <iostream>
#include <exception>
#include <stdexcept>
#include <sstream>
#include <string>

using namespace std;


class IllegalCharException {
public:
	
	char c;
	
	
	IllegalCharException(char i){
		c = i; 
	}
	
	char theChar() const{
		return c;
	}

  
};
