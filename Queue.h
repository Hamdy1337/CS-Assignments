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
    //prototypes of the used functions
};
#endif
