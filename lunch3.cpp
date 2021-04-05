#include<bits/stdc++.h>
using namespace::std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,p;
        cin>>s>>p;
        int zeros=0,ones=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=p[i])
            {
                if(s[i]=='0')
                {
                    zeros+=1;
                }
                else
                {
                    ones+=1;
                }                
            }
        }
        if(zeros!=ones)
        {
            cout<<"No\n";
            continue;
        }
        int c1=0;
        bool ans=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=p[i])
            {
                if(s[i]=='0')
                {
                    if(c1>0)
                    {
                        c1-=1;
                    }
                    else
                    {
                        ans=false;
                    }
                    
                }
                else
                {
                    c1+=1;
                }
                
            }

        }
        if(ans)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
    }
}