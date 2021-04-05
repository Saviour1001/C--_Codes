#include<iostream>
using namespace::std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    while(n)
    {
        sum+=n;
        cout<<"Enter a number ";
        cin>>n;

    }
    cout<<"Sum "<<sum;
    return 0;
}