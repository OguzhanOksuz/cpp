#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called!" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &ref)
{
	std::cout << "Dog copy constructor called!" << std::endl;
	this->brain = new Brain(*ref.brain);
}

Dog &Dog::operator=(const Dog &ref)
{
	std::cout << "Dog copy assigment called!" << std::endl;
	this->type = ref.type;
	delete (this->brain);
	this->brain = new Brain(*ref.brain);
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
