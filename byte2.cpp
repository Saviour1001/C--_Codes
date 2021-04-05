#include<bits/stdc++.h>
using namespace::std;
#define ll long long 
int main()
{
    ios_base::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll time=0;
        ll limit=(n+1)/2;
        ll sum=0;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater <ll>());
        for(ll i=0;i<n;i++)
        {
            time+=1;
            sum+=arr[i];
            if(time==limit)
            {
                if(sum>=x)
                {
                    cout<<"YES\n";
                    break;
                }
                else
                {
                    cout<<"NO\n";
                    break;
                }
                
            }
        }
    
    }
    return 0;
}