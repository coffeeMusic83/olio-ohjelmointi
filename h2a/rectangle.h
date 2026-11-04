#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    double getArea();
    double getCircum();
    void setWidth(double newWidth);
    void setHeight(double newHeight);

private:
    double width = 0;
    double height = 0;
};

#endif // RECTANGLE_H
