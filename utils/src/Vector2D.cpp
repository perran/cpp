#include "Vector2D.h"

#include <sstream>

using namespace std;


Vector2D::Vector2D (int x, int y)
    :x(x), y(y)
{
}

int Vector2D::getX(void)
{
    return x;
}

int Vector2D::getY(void)
{
    return y;
}

std::string Vector2D::print(void)
{

	std::ostringstream oss;
	oss << "x: " << x << ", y: " << y;
	return oss.str();
}


Vector2D &Vector2D::operator +=(const Vector2D& v)
{
	x += v.x;
	y += v.y;
	return *this;
}

Vector2D &Vector2D::operator -=(const Vector2D& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}

Vector2D operator +(Vector2D v1, const Vector2D& v2)
{
	return v1 += v2;
}

Vector2D operator -(Vector2D v1, const Vector2D& v2)
{
	return v1 -= v2;
}
