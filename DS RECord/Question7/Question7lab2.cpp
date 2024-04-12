#include "Question7lab2.h"
#include<iostream>
using namespace std;
template<typename T>
TwoWayStack<T>::TwoWayStack() {
    arr = NULL;
    top1 = -1;
    top2 = 0;
}

template<typename T>
TwoWayStack<T>::~TwoWayStack() {
    delete[] arr;
}

template<typename T>
void TwoWayStack<T>::push1(T val) {
    if (top1 == -1) {
        arr = new T[1];
        arr[++top1] = val;
    } else {
        T* temp = new T[top1 + 1];
        copy(arr, arr + top1 + 1, temp);
        delete[] arr;
        arr = temp;
        arr[++top1] = val;
    }
}

template<typename T>
void TwoWayStack<T>::push2(T val) {
    if (top2 == 0) {
        arr = new T[1];
        arr[--top2] = val;
    } else {
        T* temp = new T[top2 + 2]; // Allocate a new array with increased size
        std::copy(arr, arr + top2 + 1, temp);
        temp[--top2] = val; // Assign the new element
        delete[] arr;
        arr = temp;
    }
}


template<typename T>
T TwoWayStack<T>::pop1() {
    if (top1 >= 0) {
        T val = arr[top1--];
        if (top1 < 0) {
            delete[] arr;
            arr = NULL;
        }
        return val;
    } else {
        cout << "Stack 1 Underflow\n";
        return T();
    }
}

template<typename T>
T TwoWayStack<T>::pop2() {
    if (top2 < 0) {
        T val = arr[top2--];
        if (top2 < 0) {
            delete[] arr;
            arr = NULL;
        }
        return val;
    } else {
        cout << "Stack 2 Underflow\n";
        return T();
    }
}


template<typename T>
bool TwoWayStack<T>::isEmpty1() {
    return top1 == -1;
}

template<typename T>
bool TwoWayStack<T>::isEmpty2() {
    return top2 == -1;
}

