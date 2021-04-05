#include<bits/stdc++.h>
using namespace::std;
#define ll long long 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        
        if(n>k)
        {
            cout<<"0\n";
            continue;
        }
        ll min=k/n;
        
        cout<<min<<"\n";
    }
    return 0;
}