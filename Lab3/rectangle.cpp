#include <iostream>
#include "rectangle.h"

rectangle::rectangle(int l, int w) {
	length = l;
	width = w;
}

//calculate area function 
int rectangle::calculateArea() {
	int area = length * width;
	return area;
}

//print the shape (format = Rectangle: The length = 6 , the width = 2 and the area = 12)
void rectangle::printRectangle() {
	std::cout << "Rectangle: The length = " << length << ", width = " << width << " and the area = " << calculateArea() << "\n";
}

//results in a Rectangle with the length and the width scaled by 2
rectangle rectangle::scaleSides() {
	int newlength = length * 2;
	int newWidth = width * 2;
	return rectangle(newlength, newWidth);
}

//sum the lengths and widths of two rectangles and return a new rectangle
rectangle rectangle::sumSides(rectangle r1, rectangle r2) {
	return rectangle((r1.length + r2.length), (r1.width + r2.width));
}
