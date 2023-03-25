//
//  Queue.h
//  Assignment 3
//
//  Created by Mohamed Mansour on 25/03/2023.
//

#ifndef Mechanic_h
#define Mechanic_h

#include <iostream>
#include <string>
#include <queue>
#include "Person.h"
#include "Customer.h"
#include "Mechanic.h"
using namespace std;

template<typename T>
class Queue {
private:
    static const int MAX_SIZE = 100; // maximum size of the queue
    T arr[MAX_SIZE]; // static array to store the elements
    int front; // index of front element in queue
    int rear; // index of rear element in queue

public:
    Queue() : front(-1), rear(-1) {} // constructor

    bool isEmpty();
    bool isFull();
    void push(const T& value);
    void pop();
    T& peek();
};


template<typename T>
bool Queue<T>::isEmpty() {
    return front == -1 && rear == -1;
}

template<typename T>
bool Queue<T>::isFull() {
    return (rear + 1) % MAX_SIZE == front;
}

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

template<typename T>
void Queue<T>::pop() {
    if (isEmpty()) {
        cout<< "Queue is empty"<< endl;
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
}

template<typename T>
T& Queue<T>::peek() {
    if (isEmpty()) {
        cout<< "Queue is empty"<< endl;
    }
    return arr[front];
}
};
#endif
