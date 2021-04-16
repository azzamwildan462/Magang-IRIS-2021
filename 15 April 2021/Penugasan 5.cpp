//Write a program that defines a shape class with a constructor
//that gives value to width and height.
//The define two sub-classes triangle and rectangle,
//that calculate the area of the shape area ().
//In the main, define two variables a triangle and
//a rectangle and then call the area() function in this two varibles.

#include <cstdio>

class shape
{
protected:
    float width, height;

public:
    shape(float w, float h)
    {
        width = w;
        height = h;
    }
};
class triangle : public shape
{
public:
    triangle(float w, float h) : shape(w, h) {}
    float calc_area()
    {
        return width * height * 0.5;
    }
};
class rectangle : public shape
{
public:
    rectangle(float w, float h) : shape(w, h) {}
    float calc_area()
    {
        return width * height;
    }
};

int main()
{
    triangle triangle1(12, 13);
    rectangle rectangle1(13, 12);
    printf("Triangle area: %f\n", triangle1.calc_area());
    printf("Rectangle area: %f", rectangle1.calc_area());

    return 0;
}