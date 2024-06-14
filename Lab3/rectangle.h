#include <iostream>
#ifndef RECTANGLE_H
#define RECTANGLE_H
class rectangle {
public:
	int length;
	int width;
	rectangle(int l, int w);//contructor 
	int calculateArea();//calculate area function
	void printRectangle();//print the shape (format = Rectangle: The length = 6 , the width = 2 and the area = 12)
	virtual rectangle scaleSides();//results in a Rectangle with the length and the width scaled by 2
	virtual rectangle sumSides(rectangle r1, rectangle r2); //sum the lengths and widths of two rectangles and return a new rectangle
};


#endif
