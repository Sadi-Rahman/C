
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    double M, Q, m, Ti, Tf, delta_T, c, n, cm; 
    string prob, a, b;
    
    cout<<"Problem 24: What are the \n(a) specific heat and \n(b) molar specific heat of this substance? \n(c) How many moles are in the sample?";
   
    cout<<"\nAnswer for Proble a,b,c: ";
    cin>> prob;
    
    
    if(prob=="a"){
        
    cout<<"\nEnter Added Heat, Q = ";
    cin>>Q;
    
    cout<<"\nEnter Mass of sample, m = ";
    cin>>m;
    
    cout<<"\nEnter Initial Temp, Ti = ";
    cin>>Ti;
    
    cout<<"\nEnter Final Temp, Tf = ";
    cin>>Tf;
    
    delta_T=((Tf+273)-(Ti+273));
    
    c=(Q/((m*0.001)*delta_T));
    
    cout<<"\nAnswer For The Specific Heat, c = "<<c;
    
    }
    
    else if(prob=="b") {
    
    cout<<"\nEnter Mass of sample, m or Msam = ";
    cin>>m;
       
    cout<<"\nEnter Molar Mass, M = ";
    cin>>M;
    
    n=((m*0.001)/(M*0.001));
    
    cout<<"\nAnswer For The Molar Specific Heat of This Substance, n = "<<n;
  
    }
   
    else{
        
    cout<<"\nEnter Added Heat, Q = ";
    cin>>Q;    
        
    cout<<"\nEnter Mass of sample, m or Msam = ";
    cin>>m;
       
    cout<<"\nEnter Molar Mass, M = ";
    cin>>M;
    
    cout<<"\nEnter Initial Temp, Ti = ";
    cin>>Ti;
    
    cout<<"\nEnter Final Temp, Tf = ";
    cin>>Tf;
    
    n=((m*0.001)/(M*0.001));
    
    delta_T=((Tf+273)-(Ti+273));
    
    cm=((Q)/(n*delta_T));
    
    cout<<"\nAnswer For The Number Moles Are in The Sample, cm = "<<cm;
        
    }
    
    return 0;
}