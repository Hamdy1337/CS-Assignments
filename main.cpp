//Made by Mohamed Mansour 900222990 on 26/3/2023

#include <iostream>
#include <string>
#include <fstream>
#include "Customer.h"
#include "Mechanic.h"
#include "Person.h"
#include "Mechanic.cpp"
#include "Person.cpp"
#include "Customer.cpp"
#include "Queue.h"
#include "Queue.cpp"

//including important libraries and files

const int Size = 4;
//declaring the size of the array


void sort(customer customers[])
{
    for (int i = 0; i < 14; i++)
    {
        for (int j = i+1; j < 15; j++)
        {
            if(customers[i] > customers[j])
                swap(customers[i],customers[j]);
        }
        
    }
    
 }

// function for sorting customers ascendingly in order of their appoinments

string searchbyID(mechanic a[Size], int x )
{
    for (int i = 0; i < Size; i++)
    {
        if (x == a[i].get_id())
            return a[i].get_name();
    }
    return 0;
}
// getting names of the mechanics by knowing their IDs

int main (){
 
    queue<customer> customerQ;
    mechanic mechanics[Size] ;//assuming only 4 mechanics
    customer customers [15]; // assuming only 15 customers
    ifstream x,y;
    x.open("Mechanic.txt");
    y.open("Customer.txt");
 
    //opening the input text files
    
    string Name = "";
    int Age, ID;
 
    int i = 0;
    
    while (!x.eof())
    {// we add information to the mechanics
        x >> Name >> Age >> ID;
        mechanics[i].set_name(Name);
        mechanics[i].set_age(Age);
        mechanics[i].set_id(ID);
        i++;
}
    //setters for attributes in the array
int hours, mins, c = 0;
    
//declaring important variables
appointment appoint;
while (!y.eof())
{// we read information of the customers from the file
    appointment nu;
    nu.hours = 0;
    nu.mins = 0;
    y >> Name >> Age >> hours >> mins;
    appoint.hours = hours;
    appoint.mins = mins;
    customers[c].set_name(Name);
    customers[c].set_age(Age);
    int cur = 0;
    for (int l = c%4; l < Size; l++){
        if (mechanics[l].isavailable(appoint))// if the appointment is avilabe then set appointment to the customer and the mechanic
        {
            customers[c].setappointment(appoint);
            mechanics[l].setappointments(appoint);
            customers[c].print();
            mechanics[l].print();
            customers[c].setMechanicID(mechanics[l].get_id());// we get the id of the mechanic that was assigned to this customer
 
      cout<<appoint.hours<<":"<<appoint.mins;
        cur++;
        l = Size;
      
 
        }
    }
    if (cur==0){// if no appointment was avilable then we print that appointment was cancelled and set the id mechanic id of those customers to be 0
        cout << "\n"<<" Appointment for "<< customers[c].get_name() << " was cancelled."; customers[c].setMechanicID(0);customers[c].setappointment(nu);

    }
    c++;
}
 

cout<<"\n"<<"After sorting the output is "<<"\n";
sort(customers);//we sort the customers in the array
 for (int j = 0; j < 15; j++)
        {
            customerQ.push(customers[j]);// we push the sorted customers iinto the queue
        }
        for (int j =0; j<15; j++){
            customerQ.peek();
            
if(customerQ.peek().getMechanicID()==0){customerQ.peek().print();cout<<"no one";}
    else{customerQ.peek().print();cout << searchbyID(mechanics, customerQ.peek().getMechanicID())<<" "<<customerQ.peek().getappointment().hours<<":"<<customerQ.peek().getappointment().mins;}
    customerQ.pop();
    cout << endl << endl;
}
x.close();
y.close();
    return 0;
}
