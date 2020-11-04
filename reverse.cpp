#include<iostream>
using namespace::std;
int main()
{
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    int rev=0;
    while(a)
    {
        int rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    cout<<endl<<"Reverse of the number is "<<rev;
}