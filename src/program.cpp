#include <iostream>
#include "include/shapes/rectangle.h"
#include "include/shapes/circle.h"

void printRectangle();
void printCircle();

int main() {
    printRectangle();
    printCircle();
    return 0;
}

void printRectangle() {
    Rectangle* rectangle = new Rectangle(5,5);
    float area = rectangle->calculateArea();
    std::cout << "Rectangle has a width of '" << rectangle->getWidth() << "' and a height of '" << rectangle->getHeight() << "'\n";
    std::cout << area << "\n";
    delete rectangle;

}

void printCircle() {
    Circle* circle = new Circle(10);
    float area = circle->calculateArea();
    std::cout << "Circle has a radius of '" << circle->getRadius() << "'\n";
    std::cout << area << "\n";
    delete circle;
}