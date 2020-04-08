#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class Rectangle : public Shape
{
    public:
        Rectangle(int width, int height);
        float calculateArea();
        int getWidth();
        int getHeight();
    private:
        int width;
        int height;
};

#endif