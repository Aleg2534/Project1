#pragma once
#include "Subject.h"
#include <string>
#include "DoubleLinkedList.cpp"

using namespace std;

class Session
{
private:
	int session_Number;
	list<Subject> s_List;
public:
    Session();

    Session(int, const list<Subject>&);

    int getSessionNumber() const;
    const list<Subject>& getS_List() const;

    void setSessionNumber(int);
    void setS_List(const list<Subject>&);
    void addSubject();
};