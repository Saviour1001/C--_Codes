#include<iostream>
using namespace::std;
//Finding the smallest divisible number which could be divided by 1 to 20
int main()
{
    int m=0;
    long int n=2520;
    while(m==0)//Checker Flag if the number has been found
    {
        int check=0;
        for(int i=2;i<=20;i++)
        {
            if(n%i==0)
            {
                check=1; //Checker Flag if the number is divided by the numbers 1 to 20 
            
            if((i==20) && (check==1))
            {
                cout<<"The smallest divisible number by 1 to 20 is "<<n;
                m=1;
            }
        
            }
            else //Break the dividing loop when the number is not divisible 
            {
                break;
            }
            
        }
        n++;

    }
}