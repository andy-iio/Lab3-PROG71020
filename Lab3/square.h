#pragma once
#include "rectangle.h"

//square is a subclass of rectangle 
class square : public rectangle { //all public members of rectangle will be public in square
public:
	//constructor for square
	square(int length);
	void printSquare();
	int AreaSquare();
};
