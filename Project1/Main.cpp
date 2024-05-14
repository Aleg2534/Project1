//#include<iostream>
//#include"Subject.h"
//#include"DoublyLinkedList.h"
//using namespace std;
//
//int main(){
//	/*Subject* test1 = new Subject("a", 4);
//	Subject* test2 = new Subject("b", 4);
//	Subject* test3 = new Subject("c", 4);
//	Subject* test4 = new Subject("d", 4);*/
//	DoublyLinkedList<int> D1;
//	/*D1.push_back(*test1);
//	D1.push_back(*test2);
//	D1.push_back(*test4);
//	D1.insert(1,*test3);
//	cout << D1.get(0).get_Subject_Name();
//	cout << D1.get(1).get_Subject_Name();
//	cout << D1.get(2).get_Subject_Name();
//	cout << D1.get(3).get_Subject_Name();*/
//	return 0;
//}
#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
}

