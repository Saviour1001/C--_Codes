#include<iostream>
using namespace::std;
int check(int arr[],int n)
{
    if(arr[n]<=arr[n+1])
    {
        check(arr,n+1);
    }
    else
    {
        return 0;
    }
    return 1;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<check(arr,0);
    return 0;

}