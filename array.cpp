#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int a,b,i;
    cin>> a;
    int arr[a];
    
   
    for (int i = 0; i <a; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <a; i++){
        cout<<arr[i]<<" ";
       
    }
    cout << " \n";
    for (int i = a-1; i >=0; i--){
        cout<<arr[i]<<" ";
    }
    
    
    
    
    return 0;
}
