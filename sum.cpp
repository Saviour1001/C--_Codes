#include<bits/stdc++.h>
using namespace::std;
int main()
{
    int n,s;
    cin>>n>>s;
    vector<long long> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        long long temp=s-arr[i];
        if(binary_search(arr.begin(),arr.end(),temp))
        {
            cout<<lower_bound(arr.begin(),arr.end(),8);
        }
    }
}