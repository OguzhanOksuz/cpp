#include "Point.hpp"

#include <iostream>

int main( void ) {
	Point a(0.0f, 0.0f);
	Point b(4.0f, 0.0f);
	Point c(0.0f, 4.0f);

	Point p1(2.0f, 2.0f);
	Point p2(4.0f, 1.0f);
	Point p3(1.0f, 1.0f);

	std::cout << bsp(a, b, c, p1) << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;
	std::cout << bsp(a, b, c, p3) << std::endl;

	return 0;
}
