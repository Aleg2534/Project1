#include"Node.h"

template <typename T>
Node<T>::Node(T data) {
    this->data = data;
    next = nullptr;
    prev = nullptr;
}