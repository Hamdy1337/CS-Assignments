//
//  Mechanic.h
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
#include "Queue.h"

using namespace std;
const int n = 10;
//declaring important const for the static array

class Mechanic : public Person {
private:
    int c;
    Appointment appointment[n];
public:
    Mechanic();
    //default constructor
    Mechanic(string name, int id, int age);
    //parametarized constructor prototype
    ~Mechanic();
    //destructor
    bool isAvailable(Appointment appointment) const;
    //isAvailable function prototype
    void setAppointment(Appointment appointment);
    //setter Appointment
    int getCounter() const;
    //getter for counter
    virtual void printInfo() const;

};
//class mechanic and inherits person
#endif
