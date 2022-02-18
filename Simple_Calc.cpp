#include <iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
int main() {
  double x,y,z;
  char type;
  
  cout<<"Enter Type of operation\n(a) ADD\n(b) MINUS\n(c) MULTIPLY\n(d) DIVIDE\n ";
  cin>> type;
  
  if (type == 'a'){
    cout <<"Enter two number \n";
    cin>>x>>y;
    z=x+y;
    cout<<"Answer: "<<z;
  }
  else if(type == 'b'){
    cout <<"Enter two number \n";
    cin>>x>>y;
    z=x-y;
    cout<<"Answer: "<<z;
  }
  else if(type == 'c'){
    cout <<"Enter two number \n";
    cin>>x>>y;
    z=x*y;
    cout<<"Answer: "<<z;
  }
  else if(type == 'd'){
    cout <<"Enter two number \n";
    cin>>x>>y;
    z=x/y;
    cout<<"Answer: "<<z;
  }
  else{
    cout<<"Invalid Operation";
  }
  
  
}