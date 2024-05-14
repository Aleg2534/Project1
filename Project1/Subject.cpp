#include"Subject.h"
#include <string>

using namespace std;

Subject::Subject() : subject_Name(""), mark(0) {}

Subject::Subject(const string& subject_Name, int mark) : subject_Name(subject_Name),mark(mark){}

string Subject::get_Subject_Name(){	return subject_Name; }
int Subject::get_Mark(){ return mark; }

void Subject::set_Subject_Name(const string& subject_Name){	this->subject_Name = subject_Name; }
void Subject::set_Mark(int mark) { this->mark = mark; }