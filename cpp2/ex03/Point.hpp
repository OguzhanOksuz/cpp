#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <cmath>

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &ref);
		Point &operator=(const Point &ref);
		float getX() const;
		float getY() const;
		float Distance(Point const point) const;
		~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
