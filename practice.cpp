#include<bits/stdc++.h>
using namespace::std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum=arr[0];
    int j;
    cin>>j;
    for(int i=1;i<=j;i++)
    {
        maximum=max(maximum,arr[i]);
    }
    cout<<"Maximum is "<<maximum;
    return 0;
}