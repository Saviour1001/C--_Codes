#include<bits/stdc++.h>
using namespace::std;
const int N=1e6+1;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double map[N]={0};
        for(int i=0;i<n;i++)
        {
            int m;int arr[n][m];
            cin>>m;
            for(int j=0;j<m;i++)
            {
                cin>>arr[i][j];
                map[abs(arr[i][j])]+=1;
            }
        }
        for(int i=0;i<1e6;i++)
        {
            if(map[i]>0)
            {
                cout<<i<<"---"<<map[i]<<endl;
            }
        }
    
    }
}