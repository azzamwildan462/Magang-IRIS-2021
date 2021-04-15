#include <cstdio>
#include <iostream>
void tukar(int *angka1, int *angka2)
{
    *angka1 = *angka1 ^ *angka2;
    *angka2 = *angka1 ^ *angka2;
    *angka1 = *angka1 ^ *angka2;
}
void tukae2(int *angka1, int *angka2)
{
    int temp = *angka1;
    *angka1 = *angka2;
    *angka2 = temp;
}

class student
{
private:
    std::string name;
    int mark1, mark2, result;

public:
    student(std::string namet, int mark1t, int mark2t)
    {
        name = namet;
        mark1 = mark1t;
        mark2 = mark2t;
    }
    void calc_media()
    {
        result = mark1 + mark2;
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
    student orang1("Welldone", 4, 6);
    orang1.calc_media();
    orang1.disp();

    return 0;
}