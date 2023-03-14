//
//  Header.h
//  Second assignment
//
//  Created by Mohamed Mansour on 05/03/2023.
//

#ifndef Header_h
#define Header_h

using namespace std;

class point
 {
     
public:
// public area of the class
point()
{
    x=0;
    y=0;
}
 // Default Constructor

point(float a, float b)
{
x = a;
y = b;

}

// Parameterized Constructor, initializing x, y.

void setx(float a)
{
    x = a;
}
     
// sets x value

void sety(float b)
{
    y = b;
}
// sets y value

float getx()
{
    return x;
}
     
// gets x value
     
float gety()
{
    return y;
}
// gets y value

void displaypoint()
{
    cout << "("<< x <<", "<< y << ")";
}
// outputs point as (x , y)
// distance between current point object and another point p
private:

float x;
float y;
// data members x and y
 };

#endif /* Header_h */
