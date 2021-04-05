#include<iostream>
using namespace::std;
bool checker(int arr[],int n,int k)
{
    
    int count=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>0)
        {
            count+=1;
        }
    }
    
    return count==k;
}
bool recursive(int arr[],int n,int k,int i)
{
    if(n==k)
    {
        for(int i=1;i<=k;i++) arr[i]=i;
        return true;
    }
    if(arr[i]>0)
    {arr[i]=arr[i]*-1;}
    
    if(checker(arr,n,k-1))
    {
        return true;
    }
    else
    {
        arr[i]=arr[i]*-1;
        recursive(arr,n,k,i-1);
    }
    
    return false;

}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=1;i<=n;i++) arr[i]=i;
        recursive(arr,n,k,n);
        for(int i=1;i<=n;i++) cout<<arr[i];
    }
    return 0;
}