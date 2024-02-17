#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->number = ref.getRawBits();
	return(*this);
}

Fixed::Fixed(const Fixed &ref)
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

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = num << this->fraction;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = roundf(num * (1 << this->fraction));
}

float Fixed::toFloat(void) const
{
	return ((float)(this->number) / (float)(1 << this->fraction));
}

int Fixed::toInt(void) const
{
	return (this->number >> this->fraction);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
