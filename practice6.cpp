#include<bits/stdc++.h>
using namespace::std;
int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int curr=0;
    int i=0,j=0,st=-1,en=-1;
    while(j<n && arr[j]+curr<=s)
    {
        curr+=arr[j];
        j++;
    }
    if(curr==s)
    {
        cout<<i+1<<" "<<j;
        return 0;
    }
    while(j<n)
    {
        curr+=arr[j];
        while(curr>s)
        {
            curr-=arr[i];
            i++;
        }
        if(curr==s)
        {
            st=i+1;
            en=j+1;
        }

    }
    cout<<st<<endl<<en;
    return 0;

}