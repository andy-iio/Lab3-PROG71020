#include <iostream>

class rectangle {
protected: //only subclasses can access
	int length;
	int width;

public:
	//contructor
	rectangle(int l, int w) {
		length = l;
		width = w;
	}

	//calculate area function 
	int calculateArea() {

	}

	//print the shape (format = Rectangle: The length = 6 , the width = 2 and the area = 12)
	void printRectangle() {

	}

	//results in a Rectangle with a length equal to the summation of both lengths
	//and width equal to the summation of both widths
	rectangle sumSides() {


	}

	//results in a Rectangle with the length and the width scaled by 2
	rectangle scaleSides() {


	}


};

class square : public rectangle {

	void printSquare() {

	}
};