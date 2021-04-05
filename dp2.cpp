#include<bits/stdc++.h>
using namespace::std;
int minCoins(int n,vector<int> arr,vector<int> dp)
{
    if(n==0)
    {
        return 0;
    }
    int ans=INT_MAX;
    int subans=0;
    for(int i=0;i<arr.size();i++)
    {
        if(n-arr[i]>=0)
        {
            
            if(dp[n-arr[i]]!=-1)
            {
                subans=dp[n-arr[i]];
            }
            else
            {
                subans=minCoins(n-arr[i],arr,dp);
            }
            if(subans!=INT_MAX && subans+1<ans)
            {
                ans=subans+1;
            }
            
        }
    }
    return dp[n]=ans;
}
int main()
{
    int n=5;
    vector<int> arr{1,2,3};
    vector<int> dp(n+1,-1);
    dp[0]=0;
    cout<<minCoins(n,arr,dp);
}