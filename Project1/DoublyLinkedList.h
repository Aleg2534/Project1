//#pragma once
//#include"Node.h"
//
//template <typename T>
//class DoublyLinkedList {
//private:
//    Node<T>* head;
//    Node<T>* tail;
//    int size;
//
//public:
//    DoublyLinkedList();
//
//    void push_front(T);
//
//    void push_back(T);
//
//    void pop_front();
//
//    void pop_back();
//
//    void insert(int, T);
//
//    void remove(int);
//
//    T get(int);
//};

#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;
    Node<T>* prev;

    Node(T data) {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

template <typename T>
class DoublyLinkedList {
public:
    DoublyLinkedList();
    void push_front(T data);
    void push_back(T data);
    void pop_front();
    void pop_back();
    void insert(int index, T data);
    void remove(int index);
    T get(int index);

private:
    Node<T>* head;
    Node<T>* tail;
    int size;
};
