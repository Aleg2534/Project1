//#include <iostream>
//#include "DoublyLinkedList.h"
//#include "Node.h"
//template <typename T>
//DoublyLinkedList<T>::DoublyLinkedList() {
//        head = nullptr;
//        tail = nullptr;
//        size = 0;
//    }
//
//template <typename T>
// void DoublyLinkedList<T>::push_front(T data) {
//        Node<T>* new_node = new Node<T>(data);
//        if (head == nullptr) {
//            head = new_node;
//            tail = new_node;
//        }
//        else {
//            new_node->next = head;
//            head->prev = new_node;
//            head = new_node;
//        }
//        size++;
//    }
//
//    template <typename T>
//    void DoublyLinkedList<T>::push_back(T data) {
//        Node<T>* new_node = new Node<T>(data);
//        if (tail == nullptr) {
//            head = new_node;
//            tail = new_node;
//        }
//        else {
//            tail->next = new_node;
//            new_node->prev = tail;
//            tail = new_node;
//        }
//        size++;
//    }
//
//    template <typename T>
//    void DoublyLinkedList<T>::pop_front() {
//        if (head == nullptr) {
//            return;
//        }
//        else if (head == tail) {
//            delete head;
//            head = nullptr;
//            tail = nullptr;
//        }
//        else {
//            Node<T>* new_head = head->next;
//            delete head;
//            head = new_head;
//            head->prev = nullptr;
//        }
//        size--;
//    }
//
//    template <typename T>
//    void DoublyLinkedList<T>::pop_back() {
//        if (tail == nullptr) {
//            return;
//        }
//        else if (head == tail) {
//            delete tail;
//            head = nullptr;
//            tail = nullptr;
//        }
//        else {
//            Node<T>* new_tail = tail->prev;
//            delete tail;
//            tail = new_tail;
//            tail->next = nullptr;
//        }
//        size--;
//    }
//
//    template <typename T>
//    void DoublyLinkedList<T>::insert(int index, T data) {
//        if (index < 0 || index > size) {
//            throw std::out_of_range("Индекс вне границ списка");
//        }
//
//        Node<T>* new_node = new Node<T>(data);
//        if (index == 0) {
//            push_front(data);
//        }
//        else if (index == size) {
//            push_back(data);
//        }
//        else {
//            Node<T>* current = head;
//            for (int i = 0; i < index; i++) {
//                current = current->next;
//            }
//            current->prev->next = new_node;
//            new_node->next = current;
//            size++;
//        }
//    }
//
//    template <typename T>
//    void DoublyLinkedList<T>::remove(int index) {
//        if (index < 0 || index >= size) {
//            throw std::out_of_range("Индекс вне границ списка");
//        }
//
//        if (index == 0) {
//            pop_front();
//        }
//        else if (index == size - 1) {
//            pop_back();
//        }
//        else {
//            Node<T>* current = head;
//            for (int i = 0; i < index; i++) {
//                current = current->next;
//            }
//            current->prev->next = current->next;
//            current->next->prev = current->prev;
//            delete current;
//            size--;
//        }
//    }
//
//    template <typename T>
//    T DoublyLinkedList<T>::get(int index) {
//        if (index < 0 || index >= size) {
//            throw std::out_of_range("Индекс вне границ списка");
//        }
//
//        Node<T>* current = head;
//        for (int i = 0; i < index; i++) {
//            current = current->next;
//        }
//        return current->data;
//    }

#include "DoublyLinkedList.h"

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

template <typename T>
void DoublyLinkedList<T>::push_front(T data) {
    Node<T>* new_node = new Node<T>(data);
    if (head == nullptr) {
        head = new_node;
        tail = new_node;
    }
    else {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    size++;
}

template <typename T>
void DoublyLinkedList<T>::push_back(T data) {
    Node<T>* new_node = new Node<T>(data);
    if (tail == nullptr) {
        head = new_node;
        tail = new_node;
    }
    else {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
    size++;
}

template <typename T>
void DoublyLinkedList<T>::pop_front() {
    if (head == nullptr) {
        return;
    }
    else if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
    }
    else {
        Node<T>* new_head = head->next;
        delete head;
        head = new_head;
        head->prev = nullptr;
    }
    size--;
}

template <typename T>
void DoublyLinkedList<T>::pop_back() {
    if (tail == nullptr) {
        return;
    }
    else if (head == tail) {
        delete tail;
        head = nullptr;
        tail = nullptr;
    }
    else {
        Node<T>* new_tail = tail->prev;
        delete tail;
        tail = new_tail;
        tail->next = nullptr;
    }
    size--;
}

template <typename T>
void DoublyLinkedList<T>::insert(int index, T data) {
    if (index < 0 || index > size) {
        throw std::out_of_range("Индекс вне границ списка");
    }

    Node<T>* new_node = new Node<T>(data);
    if (index == 0) {
        push_front(data);
    }
    else if (index == size) {
        push_back(data);
    }
    else {
        Node<T>* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next->prev = new_node;
        current->next = new_node;
        new_node->prev = current;
        size++;
    }
}

template <typename T>
void DoublyLinkedList<T>::remove(int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Индекс вне границ списка");
    }

    if (index == 0) {
        pop_front();
    }
    else if (index == size - 1) {
        pop_back();
    }
    else {
        Node<T>* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        delete current;
        size--;
    }
}

template <typename T>
T DoublyLinkedList<T>::get(int index) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Индекс вне границ списка");
    }

    Node<T>* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}
