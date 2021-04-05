#include<iostream>
using namespace::std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum=0;int best=0;
    for(int k=0;k<n;k++)
    {
        sum=max(arr[k],sum+arr[k]);
        best=max(best,sum);
    }
    cout<<best<<endl;
    return 0;
}