#include <iostream>
#include "include/rectangle.h"

int main() {
    Rectangle* rectangle = new Rectangle(5,5);
    float area = rectangle->calculateArea();
    std::cout<<area;
    return 0;
}