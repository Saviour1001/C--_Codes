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
        string s;
        cin>>s;
        ll len=s.length();
        ll count_zero=0;
        ll count_one=0;
        for(ll i=0;i<len;i++)
        {
            if(s[i]=='0')
            {
                count_zero+=1;
            }
            else
            {
                count_one+=1;
            }
        }
        if((len%2==1) || (count_one==0) || (count_zero==0))
        {
            cout<<"-1\n";
            continue;
        }
        
        ll diff=abs(count_zero-count_one);
        cout<<diff/2<<endl;
    }
}