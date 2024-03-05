#include "iter.hpp"

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	char b[] = {'a', 'b', 'c'};
	std::string c[] = {"iter.hpp", "main.cpp", "Makefile"};

	iter(a, 5, test);
	std::cout << std::endl;
	iter(b, 3, test);
	std::cout << std::endl;
	iter(c, 3, test);
}
