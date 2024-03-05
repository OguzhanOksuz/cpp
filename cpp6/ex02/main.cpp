#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

int main()
{
	Base *ptr = generate();
	Base &ref = *generate();

	std::cout << "ptr Base" << std::endl;
	identify(ptr);

	std::cout << "ref Base" << std::endl;
	identify(ref);
}
