//Made by Mohamed Mansour 900222990 on 26/3/2023

#include <iostream>
#include <string>
#include "Person.h"
#ifndef Customer
#define Customer
using namespace std;


class customer : public person{

private:

int MechanicID;// initializingthe private variables of this class
appointment Appointment;


public:

void setMechanicID(int);

void setappointment(appointment);

int getMechanicID();

appointment getappointment();// we prototype our methods

bool operator <  (const customer &x);
bool operator >  (const customer &x);
bool operator == (const customer &x);

void print();
    
    // functions prototypes
};

#endif
