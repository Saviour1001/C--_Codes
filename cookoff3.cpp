#include<bits/stdc++.h>
using namespace::std;
#define ll long long 
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.length()%2==1)
        {
            cout<<"-1\n";
            continue;
        }
        int len=s.length();
        int arr[len];
        for(int i=0;i<len;i++)
        {
            arr[i]=s[i]-48;
        }
        
        
    }
    return 0;
}