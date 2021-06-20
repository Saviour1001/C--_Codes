#include<bits/stdc++.h>
using namespace::std;

const long long N=101;
const long long W=100005;

long long dp[N][W];
bool visited[N][W];

long long n,c;
long long w[N],v[N];

long long calc(long postion,long long capacity)
{
    if(postion==n)
    {
        return 0;
    }
    if(visited[postion][capacity])
    {
        return dp[postion][capacity];
    }
    visited[postion][capacity]=1;
    long long ans=0;
    if(capacity-w[postion]>=0)
    {
        ans=max(ans,calc(postion+1,capacity-w[postion])+v[postion]);
    }
    ans=max(ans,calc(postion+1,capacity));
    dp[postion][capacity]=ans;
    return ans;
}

int main()
{
    cin>>n>>c;
    for(int i=0;i<n;i++)
    {
        cin>>w[i]>>v[i];
    }
    cout<<calc(0,c);
}