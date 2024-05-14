#include"Person.h"
#include <string>

using namespace std;

    Person::Person() : name(""), surname(""), second_Surname(""), gender(""), b_Day(00), b_Mounth(00), b_Year(0000) {}

    Person::Person(const string& name, const string& surname, const string& second_Surname, const string& gender, unsigned char b_Day, unsigned char b_Mounth, const string& b_Year)
        : name(name), surname(surname), second_Surname(second_Surname),gender(gender), b_Day(b_Day), b_Mounth(b_Mounth), b_Year(b_Year) {}

    string Person::get_Name() { return name; }
    string Person::get_Surname() { return surname; }
    string Person::get_Second_Surname() { return second_Surname; }
    string Person::get_Gender() { return gender; }
    unsigned char Person::get_B_Day() { return b_Day; };
    unsigned char Person::get_B_Mounth() { return b_Mounth; };
    string Person::get_B_Year() { return b_Year; };

    void Person::set_Name(const string& name) { this->name = name; }
    void Person::set_Surname(const string& surname) { this->surname = surname; }
    void Person::set_Second_Surname(const string& second_Surname) { this->second_Surname = second_Surname; }
    void Person::set_Gender(const string& gender) { this->gender = gender; }
    void Person::set_B_Year(const string& b_Year) { this->b_Year = b_Year; }
    void Person::set_B_Day(unsigned char b_Day) { this->b_Day = b_Day; }
    void Person::set_B_Mounth(unsigned char b_Mounth) { this->b_Day = b_Mounth; }

