// Lab3 - PROG71020
// Andy Guest | Alexa Bowman | Ceren Askin
//

#include <iostream>
#include "rectangle.h"
#include "square.h"

int main()
{
	//this is all temporary for testing, we will fix the main to be
	//how she wants it later
	rectangle rect1(4,5);
	rectangle rect2(2, 3);
	rect1.printRectangle();
	rectangle summed = sumSides(rect1, rect2);
	summed.printRectangle();
	square s1(3);
	s1.printRectangle();
	rectangle scaleRectangle = rect1.scaleSides();
	std::cout << "Scaled Rectangle: ";
	scaleRectangle.printRectangle();

	return 0;
}


