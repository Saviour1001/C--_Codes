#include<bits/stdc++.h>
using namespace::std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    int n,m;
    while(t--)
    {
        cin>>n>>m;
        ll arr[n][m];
        ll q;
        int x,y,v;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>arr[i][j];
            }
        }
        cin>>q;
        while(q--)
        {
            cin>>x>>y>>v;
            arr[x][y]=v;
            bool check=true;
            for(int i=1;i<n;i++)
            {
                for(int j=i;j<m;j++)
                {
                    if(arr[i][j]!=arr[i+1][j+1])
                    {
                        check=false;
                    }
                    
                }
            }
            if(check)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
            

        }
        
    }

}