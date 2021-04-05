#include<iostream>
using namespace::std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int i=0;
        while(i<=n)
        {
            int first=arr[i];
            if(i+1<n)
            {int second=arr[i+1];
            switch(second)
            {
                case 1:arr[i+1]=second^1;break;
                case 2:arr[i+1]=second^2;break;
                case 4:arr[i+1]=second^4;break;
                case 8:arr[i+1]=second^8;break;
            }}           
            
            switch(first)
            {
                case 1:arr[i]=first^1;break;
                case 2:arr[i]=first^2;break;
                case 4:arr[i]=first^4;break;
                case 8:arr[i]=first^8;break;
            }
            
            i++;

        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<arr[3];
    }
}