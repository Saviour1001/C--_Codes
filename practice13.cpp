#include<bits/stdc++.h>
using namespace::std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int x;
    cin>>x;
    auto k = lower_bound(arr,arr+n,x)-arr;
    auto m= upper_bound(arr,arr+n,x)-arr;
    auto r=equal_range(arr,arr+n,x);
    cout<<r.first-r.second;

}