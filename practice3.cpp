#include<bits/stdc++.h>
using namespace::std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=0;
    arr[n]=-1;
    int rbd=0;
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if((arr[i]>mx) && arr[i]>arr[i+1])
        {
            rbd+=1;

        }
        mx=max(mx,arr[i]);
    }
    cout<<rbd<<endl;
    return 0;
}