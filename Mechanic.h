//Made by Mohamed Mansour 900222990 on 26/3/2023

#ifndef Mechanic
#define Mechanic
#include <iostream>
#include "Person.h"
class mechanic : public person      // inheriting publicily from class person
{
private:
int counter;
    //counter declaration
appointment apps[24];
    //supposing max of 24 appointments per day for each mechanic

public:
mechanic();

bool isavailable(appointment);

void setappointments(appointment );

int getcounter();

appointment getappointment();
void print();
    
//prototypes for functions
};



#endif
