//Write a class having two private variables and one member
//function which will return the area of the rectangle.

#include <cstdio>

class Shape
{
private:
    float height = 12, width = 12;

public:
    float calculate_area()
    {
        return height * width;
    }
};

int main()
{
    Shape rectangle;
    printf("%f", rectangle.calculate_area());

    return 0;
}