#include<bits/stdc++.h>
using namespace::std;
#define ll long long 
int main()
{
    ios_base::sync_with_stdio(0);
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n>k)
        {
            cout<<"-1\n";
            continue;
        }
        if(n==k)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"a";
            }
            continue;
        }
    }
}