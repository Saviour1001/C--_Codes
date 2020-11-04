#include<iostream>
using namespace::std;
//Program to find the pythagorean triplet for which a+b+c=1000
int main()
{
    for(int a=100;a<=1000;a++)
    {
        for(int b=a+1;b<=1000;b++)//a<b
        {
            for(int c=b+1;c<=1000;c++)//a<b<c
            {
                if((a*a+b*b)==c*c)
                {
                    if(a+b+c==1000)
                    {
                        cout<<a<<endl<<b<<endl<<c<<endl;
                        cout<<a*b*c;
                    }
                
                }
               
            }
        }
    }
}