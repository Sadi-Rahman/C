#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    string Array1[9]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    for (int i = a; i <= b; i++)
    {
        if (i<=9)
        {
            cout<< Array1[i-1]<<endl;
        }
        else
        {
            if (i%2==0)
            {
                cout<<"Even"<<endl;
            }
            else
            {
                cout<<"Odd"<<endl;
            }
            
            
        }
        
        
    }
    
    return 0;
}