#include <assert.h>

#include "Vector2D.h"

using namespace std;

void testAdd(void)
{
    float vX = 2;
    float vY = 3;

	Vector2D v(vX, vY);

	float v2X = 1;
	float v2Y = 2;

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
    float vX = 2;
    float vY = 3;

	Vector2D v(vX, vY);

	float v2X = 1;
	float v2Y = 2;

	Vector2D v2(1, 2);

	Vector2D v3 = v - v2;

	assert(v3.getX() == (vX-v2X) && "x not calculated when -");
	assert(v3.getY() == (vY-v2Y) && "y not calculated when -");

	v -= v2;

	assert(v.getX() == (vX-v2X) && "x not calculated when -=");
	assert(v.getY() == (vY-v2Y) && "y not calculated when -=");
}

void testScale(void)
{
    float vX = 2;
    float vY = 3;

	Vector2D v(vX, vY);

	float scale = 2;

	Vector2D v2  = v * scale;

	assert(v2.getX() == (vX*scale) && "x not calculated when *");
    assert(v2.getY() == (vY*scale) && "y not calculated when *");

    Vector2D v3  = scale * v;

	assert(v3.getX() == (vX*scale) && "x not calculated when *");
	assert(v3.getY() == (vY*scale) && "y not calculated when *");

    v *= scale;

	assert(v.getX() == (vX*scale) && "x not calculated when *");
    assert(v.getY() == (vY*scale) && "y not calculated when *");
}

void testDotProduct(void)
{
	float v1x = 2;
	float v1y = 3;

	Vector2D v1(v1x, v1y);

	float v2x = 4;
	float v2y = 5;

	Vector2D v2(v2x, v2y);

	float scalar = dotProduct(v1, v2);

	assert((v1x*v2x + v1y*v2y) == scalar && "dot product is calculated wrong");
}

void testCrossProduct(void)
{
	float v1x = 3;
	float v1y = 4;

	Vector2D v1(v1x, v1y);

	float v2x = 2;
	float v2y = 1;

	Vector2D v2(v2x, v2y);

	float scalar = crossProduct(v1, v2);
	assert(scalar < 0 && "cross product is not giving that it is on the right side of v1");

	scalar = crossProduct(v2, v1);
	assert(scalar > 0 && "cross product is not giving that it is on the left side of v1");

	scalar = crossProduct(v1, v1);
	assert(scalar == 0 && "cross product is not giving that it is at center of v1");

}

int main()
{
	testAdd();
	testSubtract();
	testScale();
	testDotProduct();
	testCrossProduct();
	return 0;
}


