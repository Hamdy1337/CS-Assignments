//Made by Mohamed Mansour 900222990 on 26/3/2023

#ifndef Queue
#define Queue
template <class T>

class queue
{
    T *arr;         // array to store queue elements
    int capacity = 15;   // capacity of the queue
    int front;      // front points to the first element in the queue
    int rear;       // rear points to the last element in the queue
    int count;      // current size of the queue
 
public:
    queue(int size = 15);
    void pop();
    void push(T);
    T peek();
    int size();
    bool isEmpty();
    bool isFull();
    
    //prototype for the functions
};
#endif
