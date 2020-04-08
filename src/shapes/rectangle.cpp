#include "include/shapes/rectangle.h"

Rectangle::Rectangle(int width, int height){
    this->width = width;
    this->height = height;
}

float Rectangle::calculateArea() {
    return this->width * this->height * 1;
}

int Rectangle::getHeight() {
    return this->height;
}

int Rectangle::getWidth() {
    return this->width;
}