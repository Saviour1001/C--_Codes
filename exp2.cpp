#include<iostream>
using namespace::std;
int power(int a,int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    int temp=power(a,b/2);
    int result=temp*temp;
    if(b%2==1) result*=a;
    return result;
}
int power1(int a,int b)
{
    int result=1;
    while(b>0)
    {
        if(b%2==1)
        result*=a;
        a*=a;
        b/=2;
    }
    return result;
}
int main()
{
    int a=power1(5,6);
    cout<<a;
    return 0;
}