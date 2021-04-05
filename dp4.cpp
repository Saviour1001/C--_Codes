#include<bits/stdc++.h>
using namespace::std;
int minBoxes(int k,vector<int> arr,vector<int> dp)
{
    if(k==0)
    {
        return 0;
    }
    int ans=INT_MAX;
    int subans=0;
    for(int i=0;i<arr.size();i++)
    {
        if(k-arr[i]>=0)
        {
            if(dp[k-arr[i]]!=-1)
            {
                subans=dp[k-arr[i]];
            }
            else
            {
                subans=minBoxes(k-arr[i],arr,dp);
            }
            if(subans!=INT_MAX && subans+1<ans)
            {
                ans=subans+1;
            }
        }
        
    }
    return dp[k]=ans;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    int n,k;
    vector<int> arr;
    
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> dp(k+1,-1);
        int x;
        while(cin>>x)
        {
            arr.push_back(x); 
        }
        cout<<minBoxes(k,arr,dp);
        
    }
}
