#include<stdio.h>
#include<iostream>
using namespace::std;
bool isPowerOfFour(unsigned int n)
{
    return n !=0 && ((n&(n-1)) == 0) && !(n & 0xAAAAAAAA);
} 
int main()
{
    int n;

    cin>>n;
    cout<<isPowerOfFour(n);


    return 0;

}