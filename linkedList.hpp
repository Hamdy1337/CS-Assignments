//
//  linkedList.hpp
//  Assignment4
//
//  Created by Mohamed Mansour on 19/04/2023.
//

#ifndef linkedList_hpp
#define linkedList_hpp
#include<iostream>
#include<vector>
#include "linkedList.hpp"

struct Node {
    int value;
    int count;
    Node* next;
};

class linkedList {
public:
    Node* head;
    Node* tail;
    linkedList();
    void addNode(int value);
    void removeNode(int value);
    void printList();
    int sumNodes();
};
#endif /* linkedList_hpp */
