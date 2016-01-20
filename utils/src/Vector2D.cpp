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

    //return "x: " + std::string(x) + ", y: " + std::string(y);
}
