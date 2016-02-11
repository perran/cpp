#include "Vector2D.h"

#include <sstream>

using namespace std;


Vector2D::Vector2D (const float& x, const float& y)
    :x(x), y(y)
{
}

float Vector2D::getX(void) const
{
    return x;
}

float Vector2D::getY(void) const
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

Vector2D &Vector2D::operator *=(const float& scalar)
{
	x *= scalar;
	y *= scalar;
	return *this;
}

//=================

Vector2D operator +(Vector2D v1, const Vector2D& v2)
{
	return v1 += v2;
}

Vector2D operator -(Vector2D v1, const Vector2D& v2)
{
	return v1 -= v2;
}

Vector2D operator *(Vector2D v, const float& scalar)
{
	return v *= scalar;
}

Vector2D operator *(const float& scalar, Vector2D v)
{
	return v *= scalar;
}

float dotProduct(const Vector2D &v1, const Vector2D &v2)
{
	return v1.getX()*v2.getX() + v1.getY()*v2.getY();
}

float crossProduct(const Vector2D& v1, const Vector2D& v2)
{
	//The sign of the result if v2 is on the left(+) or right side(-) of v1
	return v1.getX()*v2.getY()-v1.getY()*v2.getX();
}
