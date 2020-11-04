#include<iostream>
using namespace::std;
int main()
{
    int n=100;
    for(int i=2;i<=100;i++)
    {
        int div=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            div++;
        }
        if(div==1)
        cout<<i<<" is prime"<<endl;
    }
}