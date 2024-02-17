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

		bool operator>(const Fixed &fixed) const;
		bool operator<(const Fixed &fixed) const;
		bool operator>=(const Fixed &fixed) const;
		bool operator<=(const Fixed &fixed) const;
		bool operator==(const Fixed &fixed) const;
		bool operator!=(const Fixed &fixed) const;
		Fixed operator+(const Fixed &fixed) const;
		Fixed operator-(const Fixed &fixed) const;
		Fixed operator*(const Fixed &fixed) const;
		Fixed operator/(const Fixed &fixed) const;
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		static Fixed const &min(Fixed &f1, Fixed &f2);
		static Fixed const &max(Fixed &f1, Fixed &f2);
		static Fixed const &min(const Fixed &f1, const Fixed &f2);
		static Fixed const &max(const Fixed &f1, const Fixed &f2);
		~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
