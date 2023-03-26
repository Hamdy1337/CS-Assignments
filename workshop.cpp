////
// workshop.cpp
// Assignment 3
//
// Created by Mohamed Mansour on 25/03/2023.
#include <iostream>
#include <string>
#include <queue>
#include "Person.h"
#include "Customer.h"
#include "Queue.h"
#include "Mechanic.h"
using namespace std;

int main() {
    int num1, num2;
    
    // declaring important variables
    cout << "Enter the number of mechanics: ";
    cin >> num1;
    // taking input for the number of mechanics from the user
    
    Mechanic *mechanics = new Mechanic[num1];
    for (int i = 0; i < num1; i++) {
        cout << "Enter the mechanic name: " << i+1 << ": ";
        string name;
        cin >> name;
        mechanics[i].setName(name);
    }//looping in the array to record each entry taken from the user

    cout << "Enter the number of customers: ";
    cin >> num2;
    // taking input for the number of customers from the user
    
    Customer *customers = new Customer[num2];
    for (int i = 0; i < num2; i++) {
        cout << "Enter the customer name: " << i+1 << ": ";
        string name;
        cin >> name;

        int hour, minute;
        char separator;
        cout << "Enter the appointment time for " << name << " (hh:mm): ";
        cin >> hour >> separator >> minute;

        customers[i].setName(name);
        customers[i].setAppointment(hour, minute);
    }//looping in the array to record each entry taken from the user

    int mechanicIndex = 0;
    for (int i = 0; i < num2; i++) {
        Customer customer = customers[i];
        bool assigned = false;
        while (!assigned) {
            if (mechanics[mechanicIndex].isAvailable(customer.getAppointment())) {
                mechanics[mechanicIndex].assignCustomer(customer);
                assigned = true;
            }
            else {
                mechanicIndex = (mechanicIndex + 1) % num1;
            }
        }
    }
//checking if the said mechanic is available for the customer and assigning a customer to a mechanic
    Queue<Customer> customerQueue;
    for (int i = 0; i < num2; i++) {
        customerQueue.enqueue(customers[i]);
    }

    while (!customerQueue.isEmpty()) {
        Customer customer = customerQueue.dequeue();
        mechanics assignedMechanic = customer.getAssignedMechanic();
        cout << "Mr./Mrs. " << customer.getName() << " should be assigned to " << assignedMechanic.getName() << " at " << customer.getAppointment().toString() << endl;
    }

    delete[] mechanics;
    delete[] customers;
//deleting mechanics and customers
    return 0;
}
