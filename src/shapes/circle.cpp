#include "include/shapes/circle.h"

Circle::Circle(int radius) {
    this->radius = radius;
}

float Circle::calculateArea() {
    float area = 3.14 * this->radius * this->radius;
    return area;
}

int Circle::getRadius() {
    return this->radius;
}