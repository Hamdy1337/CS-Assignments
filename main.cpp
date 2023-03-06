//
//  main.cpp
//  Second assignment
//  900222990
//  Created by Mohamed Mansour on 05/03/2023.
//
#include <cmath>
#include <iostream>
#include "Header.h"

// including important librarires
using namespace std;        // using standard namespacing


point Center(point[], int);
void closest(point[],point[],point,int);

//prototypes of the functions used in the program

int main()                  //defining the main function
{
    srand(time(NULL));
    int m = 0, n = 0;


    
    cout << "size of clusters: ";
        cin >> n ;
    cout << "number of points to be tested: ";
        cin >>m;
    //taking the size of the clusters of the arrays from the user and the testing array
    
    
    point *A = new point [n];
    point *B = new point [n];
    
    point *arr = new point [m];
    //declaring three dynamic 1 D arrays
    
    for(int i =0; i < n; i++){
        A[i].setx(((rand() % 199) + 701) / 10.0);
        A[i].sety(((rand() % 199) + 701) / 10.0);
        B[i].setx(((rand() % 199) + 201) / 10.0);
        B[i].sety(((rand() % 199) + 201) / 10.0);
        
//defining the right range of the X's and Y's in both arrays of type point
    }
    for(int i =0; i < m; i++){
        arr[i].setx(((rand() % 94) + 51) / 10.0);
        arr[i].sety(((rand() % 94) + 51) / 10.0);
    }
    
//defining the range for the X's and Y's in r array of type point
    for(int i = 0; i < m; i++)
    {
        closest(A, B, arr[i], n);
    }
}

point Center(point A[], int n)
{
    float sumX = 0,
    sumY = 0,
    avgX = 0,
    avgY= 0;
    
    for(int i = 0 ;i < n; i++)
    {
        sumX += A[i].getx();
        sumY += A[i].gety();
        avgX = sumX / n;
        avgY = sumY / n;
    }
    point h (avgX , avgY);
    return h;
}
void closest(point A[],point B[],point r, int n)
{
    // The following is a function that determines whether a point is closer to one cluster or the other.
    float distanceA = sqrt(pow(Center(A, n).getx()-(r.getx()), 2)+pow(Center(A, n).gety()-(r.gety()), 2));
    float distanceB =  sqrt(pow(Center(B, n).getx()-(r.getx()), 2)+pow(Center(B, n).gety()-(r.gety()), 2));
    
    
        if (distanceB < distanceA)
            // if distance to center of A is shorter, then it is closer to A.
            cout << "point is closer to the cluster B"<< endl;
        else
            // if distance to center of A is shorter, then it is closer to A.
            cout << "point is closer to the cluster A" << endl;
    }


