#include<iostream>
using namespace::std;
//Find the sum of the multiples of 3 and 5
int main()
{
    cout<<"Enter a number ";
    int a;
    int sum=0;
    cin>>a;
    for(int i=1;i<a;i++)
    {
        if((i%3==0) || (i%5==0))
        sum+=i;

    }
    cout<<sum;
    return 0;
}