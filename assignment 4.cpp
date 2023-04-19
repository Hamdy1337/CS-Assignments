//
//  main.cpp
//  Assignment4
//
//  Created by Mohamed Mansour on 14/04/2023.
//
#include<iostream>
#include<cstdlib>
#include<vector>
#include"linkedList.hpp"

using namespace std;
linkedList createLinkedList(vector<int> v);
void insertAfter(vector<int>& v, int, int);

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int firstVal, secondVal;
    cout << "Enter the first value: ";
    cin >> firstVal;
    cout << "Enter the second value: ";
    cin >> secondVal;

    insertAfter(v, firstVal, secondVal);

    cout << "The updated vector is: ";
    for (int num : v) {
        cout << num << " ";
    }
    linkedList list = createLinkedList(v);

    cout << "Linked List:" << endl;
    list.printList();
    cout << "Sum of Nodes: " << list.sumNodes() << endl;

    
    list.removeNode(3);
    list.printList();
    cout<<endl;
    return 0;

}
void insertAfter(vector<int>& v, int firstVal, int secondVal) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == firstVal) {
            v.insert(v.begin() + i + 1, secondVal);
            i++; // skip the newly inserted element
        }
    }
}
linkedList createLinkedList(vector<int> v) {
    linkedList list;

    for (int i = 0; i < v.size(); i++) {
        int value = v[i];
        bool found = false;

        Node* current = list.head;

        while (current != nullptr) {
            if (current->value == value) {
                current->count++;
                found = true;
                break;
            }

            current = current->next;
        }

        if (!found) {
            list.addNode(value);
        }
    }

    return list;
}
