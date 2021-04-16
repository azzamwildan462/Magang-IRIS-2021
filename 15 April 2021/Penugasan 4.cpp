//Perform addition operation on complex data using class and object.
//The program should ask for real and imaginary part of two complex numbers,
//and display the real and imaginary parts of their sum.
#include <cstdio>

class complex_number
{
private:
    float real, imaginary;

public:
    void setNumber(float real_num, float imaginary_num)
    {
        real = real_num;
        imaginary = imaginary_num;
    }
    float getRealNumber()
    {
        return real;
    }
    float getImaginaryNumber()
    {
        return imaginary;
    }
};

int main()
{
    float real[2], imaginary[2];
    printf("Complex number 1: ");
    scanf("%f %f", &real[0], &imaginary[0]);
    printf("Complex number 2: ");
    scanf("%f %f", &real[1], &imaginary[1]);

    complex_number num1, num2;
    num1.setNumber(real[0], imaginary[0]);
    num2.setNumber(real[1], imaginary[1]);
    printf("Real: %.02f\nImaginary: %.02fi", num1.getRealNumber() + num2.getRealNumber(), num1.getImaginaryNumber() + num2.getImaginaryNumber());

    return 0;
}