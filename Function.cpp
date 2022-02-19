#include <iostream>
using namespace std;

int maxFour(int a, int b, int c, int d){
if(a>b && a>c && a>d){
  cout<<a;
  return(a);
}
  else if (b>a && b>c && b>d){
    cout<<b;
    return(b);
  }
    else if (c>a && c>b && b>d){
    cout<<c;
    return(c);
  }
    else {
    cout<<d;
    return(d);
  }
  
}

int main() {
   int a,b,c,d,max;
  cout<<"Enter Your Four Number: \n";
  cin>>a>>b>>c>>d;
  max=maxFour(a,b,c,d);
  
    return 0;
}