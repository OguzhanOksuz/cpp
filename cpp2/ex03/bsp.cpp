#include "Point.hpp"

float Area(float lenA, float lenB, float lenC)
{
	float lenU = ((lenA + lenB +lenC) / 2);
	float Area = sqrt(lenU * (lenU - lenA) * (lenU - lenB) * (lenU - lenC));
	return (Area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float lenAB = a.Distance(b);
	float lenAC = a.Distance(c);
	float lenBC = b.Distance(c);
	float eArea = Area(lenAB, lenAC, lenBC);
	float lenPA = point.Distance(a);
	float lenPB = point.Distance(b);
	float lenPC = point.Distance(c);
	float pArea = Area(lenPA, lenPB, lenAB) + Area(lenPA, lenPC, lenAC) + Area(lenPB, lenPC, lenBC);
	return (eArea >= pArea);
}
