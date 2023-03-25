//
//  Person.h
//  Assignment 3
//
//  Created by Mohamed Mansour on 25/03/2023.
//

#ifndef Person_h
#define Person_h

#include <iostream>
#include <string>
#include "Customer.h"
#include "Mechanic.h"
#include "Queue.h"

using namespace std;

class Person {
    
private:
    string name;
    int id;
    int age;
    
    //declaring needed data variables
public:
    Person();
    //default constructor
    
    Person(string name, int id, int age);
    
    //parametarized constructor prototype
    
    virtual ~Person();
    
    void setName(string name);
    void setID(int id);
    void setAge(int age);
    
    //setters
    
    string getName() const;
    int getID() const;
    int getAge() const;
    
    //getters
    
    virtual void printInfo() const = 0;
    
    //making printInfo function pure virtual
    

    struct Appointment {
    int hours;
    int mins;
};
    //declaring the structure appointment with the members hours and mins
};

#endif
