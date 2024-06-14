// Lab3 - PROG71020
// Andy Guest | Alexa Bowman | Ceren Askin

#include <iostream>
#include "rectangle.h"
#include "square.h"

int main()
{
	////initiazlize rectangles 
	rectangle r1(2, 3);
	rectangle r2(4, 5);
	
	//calculate: Rectangle R = R1 * 2 + R2; Where R1 and R2 of type Rectangle
	r1 = r1.scaleSides(); //scale the sides of rectangle 1
	rectangle result = r1.sumSides(r1, r2); //sum the two rectangles 
	result.printRectangle(); //results of calculation are printed

	//initalize squares
	square s1(3);
	square s2(5);

	//calculate: Square S = S1 * 2 + S2; Where S1 and S2 of type Square
	rectangle temp = s1.scaleSides(); // temporarily hold returned rectangle 
	temp = temp.sumSides(temp, s2);
	square resultSquare(temp.length); //convert back to a square
	resultSquare.printSquare(); //results of calculation are printed
	
	return 0;
}