#include<bits/stdc++.h>
using namespace::std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        set<int> s;
        int arr1[n],arr2[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
            s.insert(arr1[i]);
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        s.insert(0);
        /*(for(int h=0;h<m*n;h++)
        {for(auto e:s)
        {
            for(int i=0;i<m;i++)
            {
                s.insert(e&arr2[i]);
            }
        }
        for(auto e:s)
        {
            for(int i=0;i<n;i++)
            {
                s.insert(e|arr1[i]);
            }
        }})*/
        for(int )
        
        
        cout<<s.size()<<"\n";
    }
}