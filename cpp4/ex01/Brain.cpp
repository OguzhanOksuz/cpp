#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain construct called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = i;
}

Brain::Brain(const Brain &ref)
{
	std::cout << "Brain copy construct called" << std::endl;
	*this = ref;
}

Brain &Brain::operator=(const Brain &ref)
{
	std::cout << "Brain copy assigment called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destruct called" << std::endl;
}
