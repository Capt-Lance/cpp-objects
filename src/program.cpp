#include <iostream>
#include "shapes/rectangle.h"
#include "shapes/circle.h"

void printRectangle();
void printCircle();

int main() {
    for (int i = 0; i < 10; i++) {
        printRectangle();
        printCircle();
    }

    return 0;
}

void printRectangle() {
    Rectangle rectangle(5,5);
    float area = rectangle.calculateArea();
    std::cout << "Rectangle has a width of '" << rectangle.getWidth() << "' and a height of '" << rectangle.getHeight() << "'\n";
    std::cout << area << "\n";
}

void printCircle() {
    Circle circle(10);
    float area = circle.calculateArea();
    std::cout << "Circle has a radius of '" << circle.getRadius() << "'\n";
    std::cout << area << "\n";
}