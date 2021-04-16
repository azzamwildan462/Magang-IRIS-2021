//Write a probram with a mother class animal.
//Inside it define a name and an age variables,
//and set_value() function.
//Then create two bases variables Zebra and Dolphin
//which write a message telling the age,
//the name and giving some extra information (e.g. place of origin).
#include <iostream>

class animal
{
protected:
    std::string name;
    int age;

public:
    void set_value(std::string animal_name, int animal_age)
    {
        name = animal_name;
        age = animal_age;
    }
};
class zebra : public animal
{
private:
    std::string place_of_origin = "Africa";

public:
    void get_message()
    {
        std::cout << "Animal name: " << name << "\nAge: " << age << "\nPlace of Origin: " << place_of_origin << "\n";
    }
};
class dolphin : public animal
{
private:
    std::string place_of_origin = "America";

public:
    void get_message()
    {
        std::cout << "Animal name: " << name << "\nAge: " << age << "\nPlace of Origin: " << place_of_origin << "\n";
    }
};

int main()
{
    zebra zebra1;
    dolphin dolphin1;
    zebra1.set_value("Zeeb", 19);
    zebra1.get_message();
    dolphin1.set_value("Dolpino", 12);
    dolphin1.get_message();
}