#include<iostream>
#include<math.h>
using namespace::std;
int prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long int sum=2;
    for(long long int i=3;i<2000000;i+=2)
    {
        if(prime(i)==1)
        {
           
            sum=sum+i;
        }
    }
    cout<<"Sum of all the primes below 2 million is "<<sum;
    return 0;


}