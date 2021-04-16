//Write a c++ class called 'student' with

// Data members:
// name(char type),
// marks1,marks2 (integer type)

// The program asks the user to enter name and marks.
//Then calc_media() calculates the media note and
//disp() display name and total media mark on screen in different lines.

#include <iostream>

class student
{
private:
    std::string name;
    int marks1, marks2, result;

public:
    student(std::string namet, int marks1t, int marks2t)
    {
        name = namet;
        marks1 = marks1t;
        marks2 = marks2t;
    }
    void calc_media()
    {
        result = marks1 + marks2;
    }
    void disp()
    {
        // printf("Name: %s\n", name);
        std::cout << name << std::endl;
        printf("Total: %d\n", result);
    }
};

int main()
{
    std::string name;
    int mark1, mark2;
    std::cin >> name;
    std::cin >> mark1 >> mark2;
    student orang1(name, mark1, mark2);
    orang1.calc_media();
    orang1.disp();

    return 0;
}