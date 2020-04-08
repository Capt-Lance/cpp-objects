#ifndef SHAPE_H
#define SHAPE_H
class Shape {
    public:
    virtual ~Shape() = default;
        virtual float calculateArea() = 0;
};
#endif