#include<iostream>
using namespace::std;
int natural(int a)
{
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    n=3;
    int ans=natural(n);
    cout<<ans;
}