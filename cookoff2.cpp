#include<bits/stdc++.h>
using namespace::std;
#define ll long long 
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,k,n;
        cin>>x>>y>>k>>n;
        if((x-y)%(2*k)==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    return 0;
}