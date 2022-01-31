#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    double m, P, Ti, Tf, delta_T, c, t; 
    
    cout<<"Problem 22: Calculate the time required to bring all this water from 23° C to 100° C";
    
    cout<<"\nEnter Mass, m = ";
    cin>>m;
    
    cout<<"\nEnter Power, P = ";
    cin>>P;
    
    cout<<"\nEnter Initial Temp, Ti = ";
    cin>>Ti;
    
    cout<<"\nEnter Final Temp, Tf = ";
    cin>>Tf;
    
    cout<<"\nEnter C, c = ";
    cin>>c;
    
    delta_T=Tf-Ti;
    
    t=(m*c*delta_T)/P;
    
    cout<<"Answer of problem 22 is = "<< t << endl;
    
    
 
    return 0;
}