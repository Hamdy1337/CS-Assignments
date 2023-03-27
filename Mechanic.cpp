//Made by Mohamed Mansour 900222990 on 26/3/2023

#include "Mechanic.h"
mechanic:: mechanic(){
  counter = 0;
}
//default constructor

bool mechanic::isavailable(appointment ap){ //incomplete
int f=0;
  for (int i = 0; i < counter+1; i++)
  {
    if(apps[i].hours==ap.hours&&apps[i].mins==ap.mins){f++;i=counter;}
  }
  if(f==0){return 1;}
  else{
    return 0;}
    // checking if the desired time is already booked for said mechanic
}

//isAvailable bool function



void mechanic::setappointments(appointment app){
  apps[counter].hours = app.hours;
  apps[counter].mins = app.mins;//we set the appointment then we increment the counter to move to the next
  counter++;

}

//setter for appointments

int mechanic::getcounter(){
  return counter;}

//getter for counter

appointment mechanic::getappointment()
{
  return apps[counter];
}
//getter for appointment

void mechanic::print(){
  cout << "Mr "<< name<<" on " ;
}
//function print declaration


