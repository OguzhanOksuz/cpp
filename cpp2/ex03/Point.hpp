#ifndef POINT_HPP
# define POINT_HPP

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &ref);
		Point operator=(const Point &point);
		float getX();
		float getY();
		~Fixed();
}

#endif
