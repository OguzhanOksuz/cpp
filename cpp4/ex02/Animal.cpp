#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called!" << std::endl;
	this->type = "";
}

Animal::Animal(const Animal &ref)
{
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = ref;
}

Animal &Animal::operator=(const Animal &ref)
{
	std::cout << "Animal copy assigment operator called!" << std::endl;
	this->type = ref.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
