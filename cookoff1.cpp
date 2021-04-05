#include<bits/stdc++.h>
using namespace::std;
#define ll long long 
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        string arr;
        cin>>arr;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='1')
            {
                count+=1;
            }
        } 
        int needed=120*75/100;
        if((count+(120-n))>=needed) 
        {
            cout<<"YES\n";
        }    
        else
        {
            cout<<"NO\n";
        }
        
    }
    return 0;
}