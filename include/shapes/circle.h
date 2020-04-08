#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
class Circle: public Shape {
    public:
        Circle(int radius);
        float calculateArea();
        int getRadius();
    private:
        float radius;
};
#endif