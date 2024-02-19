#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called!" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &ref)
{
	std::cout << "Cat copy constructor called!" << std::endl;
	this->brain = new Brain(*ref.brain);
}

Cat &Cat::operator=(const Cat &ref)
{
	std::cout << "Cat copy assigment called!" << std::endl;
	this->type = ref.type;
	delete (this->brain);
	this->brain = new Brain(*ref.brain);
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
	delete (this->brain);
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
