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
		Fixed(Fixed &ref);
		Fixed& operator=(Fixed &ref);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed();
};


#endif
