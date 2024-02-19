#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called!" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &ref)
{
	std::cout << "WrongCat copy constructor called!" << std::endl;
	*this = ref;
}

WrongCat &WrongCat::operator=(const WrongCat &ref)
{
	std::cout << "WrongCat copy assigment called!" << std::endl;
	this->type = ref.type;
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
