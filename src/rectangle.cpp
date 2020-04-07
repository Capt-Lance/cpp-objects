#include "include/rectangle.h"

Rectangle::Rectangle(int width, int height){
    this->width = width;
    this->height = height;
}

float Rectangle::calculateArea(){
    return this->width * this->height;
}