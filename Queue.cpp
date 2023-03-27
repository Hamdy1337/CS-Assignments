//Made by Mohamed Mansour 900222990 on 26/3/2023

#include "Queue.h"
#include <iostream>
using namespace std;
template <class T>
queue<T>::queue(int size)
{
    arr = new T[size];// we create a dynammuc array of size size
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
template <class T>
void queue<T>::pop()
{
    if (isEmpty())// we check whther we can pop or not
    {
        cout << "Underflow"<<"\n";
    }
    else
     {
    front = (front + 1) % capacity;
    count--;
    }
}
//pop function
template <class T>
void queue<T>::push(T item)
{
    if (isFull())// we check whether we can push or not
    {
        cout << "Overflow"<<"\n";
    }
     else
     {
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
    }
}
//push function
template <class T>
T queue<T>::peek()
{
    if (isEmpty())
    {
        cout << "UnderFlow\nProgram Terminated\n";
    }
    else
        return arr[front];
}
//peek function
template <class T>
int queue<T>::size() {
    return count;
}
//size function to return count
template <class T>
bool queue<T>::isEmpty() {
    return (size() == 0);
}
//isEmpty function
template <class T>
bool queue<T>::isFull() {
    return (size() == capacity);
}
//isFull function
