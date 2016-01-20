#include <assert.h>
#include "Vector2D.h"

using namespace std;

int main()
{
    int vX = 2;
    int vY = 3;

  Vector2D v(vX, vY);

  assert(v.getX() == vX && "wrong value when getting x");
  assert(v.getY() == vY && "wrong value when getting y");

  return 0;
}
