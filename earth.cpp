#include<bits/stdc++.h>
using namespace::std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    while(1)
    {
        if(((arr[n-1]*n)>sum) && ((arr[n-2]*n)<=sum))
        {
            
            cout<<arr[n-1];
            break;
        }
        n=n-1; 
        
    }
    
    return 0;
}