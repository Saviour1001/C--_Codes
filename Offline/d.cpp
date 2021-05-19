#include<bits/stdc++.h>
using namespace::std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n];

    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];

    int carry=0;

    for(int i=n-1;i>=0;i--)
    {
        int sum=a[i]+b[i];
        c[i]=sum%10+carry;
        carry=sum/10;
    }
    if(carry>0)
    {
        cout<<"Overflow\n";
    }
    else
    for(int i=0;i<n;i++)cout<<c[i]<<" ";
    
}
