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
#include "Mechanic.h"

class customer : public person
{
private:
    string mechanicID;
    struct Appointment appointment;
    
public:
    
    bool operator==(const customer& x)
    {
        if ((this->appointment.hours == x.appointment.hours) && (this->appointment.mins == x.appointment.mins))
            return true;
        else
            return false;
    }
    
    
    bool operator<(const customer& x)
    {
        if ((this->appointment.hours < x.appointment.hours) && (this->appointment.mins < x.appointment.mins))
            return true;
        else
            return false;
    }
    
    
    bool operator>(const customer& x)
    {
        if ((this->appointment.hours > x.appointment.hours) && (this->appointment.mins > x.appointment.mins))
            return true;
        else
            return false;
    }
};

#endif /* Customer_h */
