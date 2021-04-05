#include<iostream>
using namespace::std;
int power(int a,int b)
{
    int result=1;
    while(b)
    {
        if(b%2==1) result*=a;
        a*=a;
        b/=2;
    }
    return result;
}
int inverse(int a,int p)
{
    return power(a,p-2);
}
int main()
{
    int a=power(3,4);
    int b=inverse(2,3);
    cout<<a<<endl<<b;
    return 0;

}