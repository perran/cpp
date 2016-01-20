#pragma once
#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
#include <string>


class Vector2D {
    int x, y;
  public:
    Vector2D (int,int);
    int getX();
    int getY();
    std::string print (void);

};

#endif
