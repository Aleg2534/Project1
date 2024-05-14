#pragma once
#include <string>

using namespace std;

class Subject{
private:
	string subject_Name;
	int mark;
public :
	Subject();
	Subject(const string& subject_Name, int mark);
	string get_Subject_Name();
	int get_Mark();
	void set_Subject_Name(const string& subject_Name);
	void set_Mark(int mark);
};