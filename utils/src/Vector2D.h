#pragma once
#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <string>


class Vector2D {
    float x, y;
  public:
    Vector2D (const float& x, const float& y);
    float getX() const;
    float getY() const;
    std::string print (void);

    Vector2D& operator +=(const Vector2D& v);
    Vector2D& operator -=(const Vector2D& v);
    Vector2D& operator *=(const float& scalar);
};

Vector2D operator +(Vector2D v1, const Vector2D& v2);
Vector2D operator -(Vector2D v1, const Vector2D& v2);
Vector2D operator *(Vector2D v, const float& scalar);
Vector2D operator *(const float& scalar, Vector2D v);

float dotProduct(const Vector2D& v1, const Vector2D& v2);
float crossProduct(const Vector2D& v1, const Vector2D& v2);


#endif
