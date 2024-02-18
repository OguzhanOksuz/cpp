#include "Point.hpp"

Point::Point(): x(Fixed()), y(Fixed())
{
}

Point::Point(const float x, const float y): x(Fixed(x)), y(Fixed(y))
{
}

Point::Point(const Point &ref): x(ref.x), y(ref.y)
{
}

Point &Point::operator=(const Point &ref)
{
	this->~Point();
	new (this) Point(ref.x.toFloat(), ref.y.toFloat());
	return (*this);
}

float Point::getX() const
{
	return (this->x.toFloat());
}

float Point::getY() const
{
	return (this->y.toFloat());
}

float Point::Distance(Point const point) const
{
	float deltaX = this->x.toFloat() - point.getX();
	float deltaY = this->y.toFloat() - point.getY();

	float deltaX2 = deltaX * deltaX;
	float deltaY2 = deltaY * deltaY;

	return (sqrt(deltaX2 + deltaY2));
}

Point::~Point()
{

}
