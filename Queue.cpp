//
//  Queue.cpp
//  Assignment 3
//
//  Created by Mohamed Mansour on 26/03/2023.
//
#include <iostream>
#include <string>
#include <queue>
#include "Person.h"
#include "Customer.h"
#include "Mechanic.h"
using namespace std;

template<typename T>
bool Queue<T>::isEmpty() {
    return front == -1 && rear == -1;
}//is empty function

template<typename T>
bool Queue<T>::isFull() {
    return (rear + 1) % MAX_SIZE == front;
}//is full function

template<typename T>
void Queue<T>::push(const T& value) {
    if (isFull()) {
        cout<<"Queue is full"<< endl;
    } else if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAX_SIZE;
    }
    arr[rear] = value;
}
//push function

template<typename T>
void Queue<T>::pop() {
    if (isEmpty()) {
        cout<< "Queue is empty"<< endl;
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }//pop function
};
