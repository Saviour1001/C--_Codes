#include<iostream>
using namespace::std;
//Find the sum of even numbers of Fibonnaci series under 4 million
int main()
{
    int a=0;
    int b=1;
    int c=0;
    int sum=0;
    while(c<=4000000)
    {
        c=a+b;
        a=b;
        b=c;
        if(c%2==0){
            sum=sum+c;
        }
    }
    cout<<sum;
    return 0;
}