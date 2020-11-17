#include<bits/stdc++.h>
using namespace::std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int time=0;
        int arr[n];
        for(int i=0;i<0;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    time+=arr[n-1];
    


    }
}