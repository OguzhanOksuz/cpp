#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int			number;
		static const int	fraction = 8;
	public:
		Fixed();
		Fixed(const Fixed &ref);
		Fixed& operator=(const Fixed &ref);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed(const int num);
		Fixed(const float num);
		float toFloat(void) const;
		int toInt(void) const;

		~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
