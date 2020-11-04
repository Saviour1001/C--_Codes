#include<iostream>
using namespace::std;
int main()
{
    cout<<"Enter a number ";
    int a;
    cin>>a;
    if(a&1)
    cout<<"Odd";
    else
    cout<<"Even";
    a=a<<3;
    cout<<a;
    cout<<endl<<&a;
    return 0;
    
}
