#include<iostream>
using namespace::std;
void gcd(int a,int b)
{
    if (a<b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    int ans=a%b;
    while(ans!=0)
    {
        a=b;
        b=ans;
        ans=a%b;
    }
    cout<<b<<" ";
}
int main()
{
    int a,b;
    cin>>a>>b;
    gcd(a,b);
    return 0;
}