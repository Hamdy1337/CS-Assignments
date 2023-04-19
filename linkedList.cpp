//
//  linkedList.cpp
//  Assignment4
//
//  Created by Mohamed Mansour on 19/04/2023.
//
#include<iostream>
#include<vector>
#include "linkedList.hpp"
using namespace std;

    linkedList::linkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void linkedList::addNode(int value) {
        Node* newNode = new Node();
        newNode->value = value;
        newNode->count = 1;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void linkedList::removeNode(int value) {
        Node* current = head;
        Node* previous = nullptr;

        while (current != nullptr) {
            if (current->value == value) {
                if (previous == nullptr) { // Removing the head node
                    head = current->next;
                }
                else if (current == tail) { // Removing the tail node
                    previous->next = nullptr;
                    tail = previous;
                }
                else { // Removing a node in the middle of the list
                    previous->next = current->next;
                }

                delete current; // Freeing memory
                return;
            }

            previous = current;
            current = current->next;
        }
    }

    void linkedList::printList() {
        Node* current = head;

        while (current != nullptr) {
            cout << "Value: " << current->value << ", Count: " << current->count << endl;

            current = current->next;
        }
    }

    int linkedList::sumNodes() {
        int sum = 0;

        Node* current = head;

        while (current != nullptr) {
            sum += (current->value * current->count);

            current = current->next;
        }

        return sum;
    }
