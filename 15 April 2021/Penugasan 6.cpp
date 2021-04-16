//Write a program with a mother class and an inherited daugther class.
//Both of them should have a method void display ()that
//prints a message (different for mother and daugther).
//In the main define a daughter and call the display() method on it.
#include <cstdio>
class mother
{
public:
    void display()
    {
        printf("This is a message from Mother");
    }
};
class daughter : public mother
{
public:
    void display()
    {
        printf("This is a message from Daughter");
    }
};

int main()
{
    daughter sakura;
    sakura.display();
    return 0;
}