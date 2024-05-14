#pragma once
#include<string>

using namespace std;
class Person {
private:
	string name; 
	string surname;
	string second_Surname;
	string gender;
	unsigned char b_Day;
	unsigned char b_Mounth;
	string b_Year;

public:
	Person();
	Person(const string& name, const string& surname, const string& second_Surname, const string& gender, unsigned char b_Day, unsigned char b_Mounth, const string& b_Year);

	string get_Name();
	string get_Surname();
	string get_Second_Surname();
	string get_Gender(); 
	unsigned char get_B_Day();
	unsigned char get_B_Mounth();
	string get_B_Year();

	void set_Name(const string& name);
	void set_Surname(const string& surname);
	void set_Second_Surname(const string& second_Surname);
	void set_Gender(const string& gender);
	void set_B_Year(const string& b_Year);
	void set_B_Day(unsigned char b_Day);
	void set_B_Mounth(unsigned char b_Mounth);
};