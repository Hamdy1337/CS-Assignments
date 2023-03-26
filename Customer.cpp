//
//  Customer.cpp
//  Assignment 3
//
//  Created by Mohamed Mansour on 26/03/2023.
//

#include <iostream>
#include <string>
#include <queue>
#include "Person.h"
#include "Customer.h"
#include "Queue.h"
#include "Mechanic.h"
using namespace std;

Customer::Customer() {}
//default constructor

Customer::Customer(string name, int id, int age, int mechanicID, Person::Appointment appointment)
    : Person(name, id, age), mechanicID(mechanicID), appointment(appointment) {}

//parametarized constructor definition

Customer::~Customer() {}

//destructor

void Customer::setMechanicID(int mechanicID) {
    this->mechanicID = mechanicID;
}

void Customer::setAppointment(Appointment appointment) {
    this->appointment = appointment;
}

//setters

int Customer::getMechanicID() const {
    return mechanicID;
}

Customer::Appointment Customer::getAppointment() const {
    return appointment;
}

//getters

bool Customer::operator<(const Customer& a) const {
    if (appointment.hours == a.appointment.hours) {
        return appointment.mins < a.appointment.mins;
    }
    return appointment.hours < a.appointment.hours;
}

bool Customer::operator>(const Customer& a) const {
    if (appointment.hours == a.appointment.hours) {
        return appointment.mins > a.appointment.mins;
    }
    return appointment.hours > a.appointment.hours;
}

bool Customer::operator==(const Customer& a) const {
    return (appointment.hours == a.appointment.hours) && (appointment.mins == a.appointment.mins);
}

//overloaded operators ==, > , <

void Customer::printInfo() const {
    cout << "Name: " << getName() << endl;
    cout << "ID: " << getID() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Mechanic ID: " << mechanicID << endl;
    cout << "Appointment time: " << appointment.hours << ":" << appointment.mins << endl;}

//definition of printinfo function
