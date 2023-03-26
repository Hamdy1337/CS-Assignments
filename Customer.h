//
//  Customer.h
//  Assignment 3
//
//  Created by Mohamed Mansour on 25/03/2023.
//

#ifndef Customer_h
#define Customer_h

#include <iostream>
#include <string>
#include <queue>
#include "Person.h"
#include "Queue.h"
#include "Mechanic.h"

using namespace std;

class Customer : public Person {
private:
    int mechanicID;
    Appointment appointment;
    string name;
    int time;
    Mechanic* mechanic;
    
    //important variables declaration
public:
    Customer();
    //constructor
    
    Customer(std::string name, int id, int age, int mechanicID, Appointment appointment);
    //parametarized constructor prototype
    ~Customer();
    //destructor
    
    void setMechanicID(int mechanicID);
    void setAppointment(Appointment appointment);
    
    //setters
    
    int getMechanicID() const;
    Appointment getAppointment() const;
    
    //getters
    
    bool operator<(const Customer& other) const;
    bool operator>(const Customer& other) const;
    bool operator==(const Customer& other) const;
    
    //overloaded operators prototypes
    
    virtual void printInfo() const;
    //printinfo prototype

};

#endif
