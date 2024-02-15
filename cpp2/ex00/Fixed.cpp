#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed &Fixed::operator=(Fixed &ref)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->number = ref.getRawBits();
	return(*this);
}

Fixed::Fixed(Fixed &ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->number);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->number = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
