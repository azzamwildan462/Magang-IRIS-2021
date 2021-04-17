//Write a probram with a mother class animal.
//Inside it define a name and an age variables,
//and set_value() function.
//Then create two bases variables Zebra and Dolphin
//which write a message telling the age,
//the name and giving some extra information (e.g. place of origin).
#include <iostream>

using namespace std;
class animal
{
protected:
    string name;
    int age;

public:
    void set_value(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class zebra : public animal
{
private:
    string place_of_origin = "Africa";

public:
    void get_message()
    {
        cout << "Animal name: " << name << "\nAge: " << age << "\nPlace of Origin: " << place_of_origin << "\n";
    }
};
class dolphin : public animal
{
private:
    string place_of_origin = "America";

public:
    void get_message()
    {
        cout << "Animal name: " << name << "\nAge: " << age << "\nPlace of Origin: " << place_of_origin << "\n";
    }
};

int main()
{
    string zebra_name, dolphin_name;
    int zebra_age, dolphin_age;
    cin >> zebra_name >> zebra_age;
    cin >> dolphin_name >> dolphin_age;

    zebra zebra1;
    dolphin dolphin1;

    zebra1.set_value(zebra_name, zebra_age);
    zebra1.get_message();
    dolphin1.set_value(dolphin_name, dolphin_age);
    dolphin1.get_message();
}