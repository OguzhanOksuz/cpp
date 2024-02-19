#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat basic;
	{
		Cat tmp = basic;
	}
	std::cout << "------" << std::endl;
	
	Dog dbasic;
	{
		Cat tmp = basic;
	}
	std::cout << "------" << std::endl;

	Cat expert;
	std::cout << "------" << std::endl;
	basic = expert;
	std::cout << "------" << std::endl;


	Dog dexpert;
	std::cout << "------" << std::endl;
	dbasic = dexpert;
	std::cout << "------" << std::endl;
	return 0;
}
