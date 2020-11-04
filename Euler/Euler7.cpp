#include<iostream>
using namespace::std;
int prime(long long int a)
{
    int div=0;
    for(long long int i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            div++;
        }
    }
    if(div==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    long long int n=1;
    long int count=0;
    while(count!=10001)
    {
        if(n<=2)
        n++;
        else
        n=n+2;
        if(prime(n)==1)
        {
            count++;
        }
        
    }
    cout<<"The 10001th Prime Number is "<<n;

}