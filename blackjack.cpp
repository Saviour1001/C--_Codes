#include<bits/stdc++.h>
using namespace::std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    {
        int n,x,y;
        cin>>n>>x>>y;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        if(arr[0]+arr[1]>=x && arr[0]+arr[1]<=y)
        {
            cout<<"0\n";
            continue;
        }
        
    }
}