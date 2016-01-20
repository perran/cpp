#include <assert.h>

#include "Vector2D.h"

using namespace std;

void testAdd(void)
{
    int vX = 2;
    int vY = 3;

	Vector2D v(vX, vY);

	int v2X = 1;
	int v2Y = 2;

	Vector2D v2(1, 2);

	Vector2D v3 = v + v2;

	assert(v3.getX() == (vX+v2X) && "x not calculated when +");
	assert(v3.getY() == (vY+v2Y) && "y not calculated when +");

	v += v2;

	assert(v.getX() == (vX+v2X) && "x not calculated when +=");
	assert(v.getY() == (vY+v2Y) && "y not calculated when +=");
}

void testSubtract(void)
{
    int vX = 2;
    int vY = 3;

	Vector2D v(vX, vY);

	int v2X = 1;
	int v2Y = 2;

	Vector2D v2(1, 2);

	Vector2D v3 = v - v2;

	assert(v3.getX() == (vX-v2X) && "x not calculated when -");
	assert(v3.getY() == (vY-v2Y) && "y not calculated when -");

	v -= v2;

	assert(v.getX() == (vX-v2X) && "x not calculated when -=");
	assert(v.getY() == (vY-v2Y) && "y not calculated when -=");
}

int main()
{
	testAdd();
	testSubtract();
	return 0;
}


