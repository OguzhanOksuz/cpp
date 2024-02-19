#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &ref)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = ref;
}

Dog &Dog::operator=(const Dog &ref)
{
	std::cout << "Dog copy assigment called!" << std::endl;
	this->type = ref.type;
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
