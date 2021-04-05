#include<bits/stdc++.h>
using namespace::std;
#define ll long long 
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    ll n,m;
    while(t--)
    {
        cin>>n>>m;
        ll arr[m];
        ll on_board=n;
        ll kills=0;
        int max = 0;
        for(ll i=0;i<m;i++) 
        {
            cin>>arr[i];
            /*if(on_board>1 && arr[i]%on_board!=0)
            {while(arr[i]%on_board!=0 || (arr[i]<on_board))
            {
                on_board--;
                kills++;
            }
            }*/
            if ((arr[i]/on_board) > max){
                max = (arr[i]/on_board);
            }
        }
        on_board -=max;
        kills += max;
        cout<<kills<<endl;
    }
    return 0;
}
if (max(A)-min(A)<k)
{
    return max(A)-min(A);
}