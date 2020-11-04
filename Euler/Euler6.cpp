#include<iostream>
using namespace::std;
//Find the difference between square of the sum and sum of the square
int main()
{
    long int n=0;
    long int m;
    for(int i=0;i<=100;i++)//Sum of the squares
    {
        n=n+i*i;

    }
    m=(100*(100+1))/2; //Square of the sum
    m=m*m;
    cout<<"The difference is "<<m-n;

}