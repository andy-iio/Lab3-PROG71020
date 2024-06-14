#include "square.h"

square::square(int length) : rectangle(length, length) {
	//calls the constructor of rectangle using given length for both the length and width
}

void square::printSquare() {
	std::cout << "Square: The side = " << length << " and the area = " << calculateArea();
}
