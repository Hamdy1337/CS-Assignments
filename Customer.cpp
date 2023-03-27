//Made by Mohamed Mansour 900222990 on 26/3/2023

#include <iostream>
#include <string>
#include "Customer.h"


void customer::setMechanicID(int x){
  MechanicID = x;}

//setter for mechanic ID

void customer::setappointment(appointment app){
  Appointment.hours = app.hours;
  Appointment.mins = app.mins;
  ;}

//setter for appointment

int customer::getMechanicID(){
  return MechanicID;}

//getter for mechanic ID

appointment customer::getappointment(){
  return Appointment;}

bool customer::operator == (const customer &x)
{
    return(x.Appointment.hours == Appointment.hours)&&(x.Appointment.mins == Appointment.mins);// we overload the == operation
    
}
bool customer::operator > (const customer &x)// we overload the == operation
{
    return(Appointment.hours > x.Appointment.hours)||((Appointment.hours == x.Appointment.hours)&&(Appointment.mins > x.Appointment.mins));
    
}
bool customer::operator < (const customer &x)// we overload the == operation
{
    return(Appointment.hours < x.Appointment.hours)||((Appointment.hours == x.Appointment.hours)&&(Appointment.mins < x.Appointment.mins));
    
}

void customer::print(){// we override the pure virtual print function in the person class
  cout << "\n"<<"Mr "<< name <<" has appointment with ";
  }
