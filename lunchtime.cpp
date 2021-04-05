#include<bits/stdc++.h>
using namespace::std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    int n,k;
    cin>>t;
    while(t--)
    {
        
        cin>>n>>k;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%k==0)
        {
            cout<<"0\n";
        }
        else
        {
            cout<<"1\n";
        }    
    }
    return 0;
}