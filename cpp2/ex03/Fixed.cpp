#include "Fixed.hpp"

Fixed::Fixed()
{
	this->number = 0;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	this->number = ref.getRawBits();
	return(*this);
}

Fixed::Fixed(const Fixed &ref)
{
	*this = ref;
}

int Fixed::getRawBits() const
{
	return(this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

Fixed::Fixed(const int num)
{
	this->number = num << this->fraction;
}

Fixed::Fixed(const float num)
{
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

bool Fixed::operator>(const Fixed &fixed)const
{
	return (this->number > fixed.number);
}

bool Fixed::operator<(const Fixed &fixed)const
{
	return (this->number < fixed.number);
}

bool Fixed::operator>=(const Fixed &fixed)const
{
	return (this->number >= fixed.number);
}

bool Fixed::operator<=(const Fixed &fixed)const
{
	return (this->number <= fixed.number);
}

bool Fixed::operator==(const Fixed &fixed)const
{
	return (this->number == fixed.number);
}

bool Fixed::operator!=(const Fixed &fixed)const
{
	return (this->number != fixed.number);
}

Fixed Fixed::operator+(const Fixed &fixed)const
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed)const
{
	return (this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed)const
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++()
{
	this->number++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->number--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(this->toFloat());
	this->number++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(this->toFloat());
	this->number--;
	return (tmp);
}

Fixed const &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f2;
	return (f1);
}

Fixed const &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return (f2);
}

Fixed const&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return f2;
	return (f1);
}

Fixed const& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 > f2)
		return f1;
	return (f2);
}

Fixed::~Fixed()
{
}
