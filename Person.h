//Made by Mohamed Mansour 900222990 on 26/3/2023

#ifndef Person
#define Person
#include <iostream>
#include <string>
using namespace std;
struct appointment
{
int hours;
int mins;
};
// appointment structure declaration
class person{
    protected:
    string name;
    int id;
    int age;
//protected data members
    public:
    person();
    void set_name(string);
    void set_id(int );
    void set_age(int );
    string get_name();
    int get_id();
    int get_age();
    virtual void print()=0;// we make print function pure virtual to make the class abstract
//public data members prototypes
};


#endif
