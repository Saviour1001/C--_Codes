#include<iostream>
#include<bits/stdc++.h>
using namespace::std;
//Find the largest prime factor of a large number
int factorize(long long int a)
{
    int count=0;
    int check;
    while(!(a%2)) //Checking how many times the factor 2 divides the number 
    {
        count++;
        a=a/2;
        check=2;
    }
    for(long long int i=3;i<=sqrt(a);i=i+2) //Iterating every odd number from 3 to sqrt of the big number 
    {                                       //to lower the amount of cases to check 
        
        while(a%i==0)
        {
            check=i;
            a=a/i;
        }
    }
    if(a>2)  //If in the end the number itself becomes a prime , then it is the largest prime factor
    {
        check=a;
    }
    return check;
}
int main()
{
    cout<<"Enter a number ";
    long long int n;
    long long int b;
    cin>>n;
    b=factorize(n);
    cout<<endl<<b;
    return 0;
}
