#include<bits/stdc++.h>
using namespace::std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        int ss=0;
        cin>>n>>k;
        int cnt[n];
        for(int i=0;i<=n;i++) cin>>cnt[i];
        set<pair<int,int>>s;
        for(int i=0;i<=n;i++)
        {
            s.insert({cnt[i],i});
            ss+=cnt[i];
        }
        assert(ss==n*k);
        for(int i=0;i<n;i++)
        {
            int x=(*s.begin()).first,ty1=(*s.begin()).second;
            s.erase(s.begin());
            int diff=k-x;
            cout<<ty1<<" "<<x<<" ";
            auto it= s.end();it--;
            int y=(*it).first,ty2=(*it).second;
            cout<<ty2<<" "<<diff<<" \n";
            y-=diff;
            s.erase(it);s.insert({y,ty2});
        }
    }
}