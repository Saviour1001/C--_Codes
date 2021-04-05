#include<iostream>
using namespace::std;
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int prev=sum(n-1);
    cout<<n+prev<<endl;
    return n+prev;
}
int power(int n,int a)
{
    int result=1;
    while(a>0)
    {
        if(a%2==1) result*=n;
        n*=n;
        a/=2;
    }
    return result;
}
int fact(int n)
{
    if(n==0) return 1;
    int prev=fact(n-1);
    return n*prev;
}
int fibb(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return fibb(n-1)+fibb(n-2);
}
int main()
{
    int n,a;
    //cin>>n>>a;
    //cout<<power(n,a);
    //cout<<endl<<sum(n);
    cout<<fibb(20);
    return 0;
}