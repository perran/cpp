#pragma once
#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <string>


class Vector2D {
    int x, y;
  public:
    Vector2D (int,int);
    int getX();
    int getY();
    std::string print (void);

    Vector2D& operator +=(const Vector2D& v);
    Vector2D& operator -=(const Vector2D& v);
};

Vector2D operator +(Vector2D v1, const Vector2D& v2);
Vector2D operator -(Vector2D v1, const Vector2D& v2);


#endif
