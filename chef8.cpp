#include<iostream>
using namespace::std;
#define ll long long 
int DoXOR(ll arr[],int i)
{
    if(arr[i]==2 || arr[i]==4 || arr[i]==8)
    {
        arr[i]=arr[i]^arr[i];
    }            
    if(arr[i]==6)
    {
        arr[i]=arr[i]^4;
    }
    if(arr[i]%2==1)
    {
        arr[i]=arr[i]^1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,n;
    ll x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        arr[n]=0;
        if(n%2==0)
        {
            for(int i=0;i<n;i+=2)
            {
                DoXOR(arr,i+1);
                DoXOR(arr,i);
            }
        }
        else
        {
            /* code */
        }
        
        
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    }


}