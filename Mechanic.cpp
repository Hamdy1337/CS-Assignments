//
//  Mechanic.cpp
//  Assignment 3
//
//  Created by Mohamed Mansour on 25/03/2023.
//

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include "Person.h"
#include "Customer.h"
#include "Queue.h"
#include "Mechanic.h"
using namespace std;


Mechanic::Mechanic() {}

//default constructor of mechanic

Mechanic::Mechanic(string name, int id, int age)
    : Person(name, id, age), c(0) {}

//parametarized constructor of mechanic

Mechanic::~Mechanic() {}

//destructor

bool Mechanic::isAvailable(Appointment appointment) const {
    for (int i = 0; i < c; i++) {
        if (appointments[i] == appointment) {
            return false;
        }
    }
    return true;
}

// definition of isAvailable function
void Mechanic::setAppointment(Appointment appointment)
{
    appointments[c++] = appointment;
}

int Mechanic::getCounter() const {
    return c;
}
//getter for counter

void Mechanic::printInfo() const {
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Appointments: " << endl;
    for (int i = 0; i < counter; i++) {
        cout << appointments[i].hours << ":" << appointments[i].mins << endl;
    }
    
//function definition of print info
}
