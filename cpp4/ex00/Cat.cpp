#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called!" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &ref)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = ref;
}

Cat &Cat::operator=(const Cat &ref)
{
	std::cout << "Cat copy assigment called!" << std::endl;
	this->type = ref.type;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
