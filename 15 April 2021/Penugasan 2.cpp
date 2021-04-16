//Write a program and input two integers in main and
//pass them to default constructor of the class.
//Show the result of the additon of two numbers.

#include <cstdio>

class Class1
{
private:
    int int1, int2;

public:
    Class1(int i1, int i2)
    {
        int1 = i1;
        int2 = i2;
    }
    int result_of_addition_two_integers()
    {
        return int1 + int2;
    }
};

int main()
{
    int int1, int2;
    scanf("%d %d", &int1, &int2);
    Class1 obj1(int1, int2);
    printf("%d", obj1.result_of_addition_two_integers());

    return 0;
}