#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called!" << std::endl;
	this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	*this = ref;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
	std::cout << "WrongAnimal copy assigment operator called!" << std::endl;
	this->type = ref.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

void WrongAnimal::makeSound() const
{

}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
