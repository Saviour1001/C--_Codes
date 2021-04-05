#include<bits/stdc++.h>
using namespace::std;
int minCoins(int n,vector<int> arr,vector<int> &dp) 
{
    if(n==0)
    {
        return 0;
    }
    int ans=INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        if(n-arr[i]>=0)
        {
            int subans=0;
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
    int n=20;
    vector<int> myvector{7,5,1};
    vector<int> dp(n+1,-1);
    dp[0]=0;
    cout<<minCoins(n,myvector,dp)<<endl;
    // for(int i=0;i<=n;i++)
    // {
    //     cout<<i<<"-----"<<dp[i]<<endl;
    // }

}