#include<iostream>
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
    int N=1000;
    int check[N];
    for(int i=0;i<N;i++)
    {
       check[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            check[arr[i]]=1;
        }
    }
    int i=0;
    while(check[i]!=0)
    {
        i++;
    }
    cout<<i;
    return 0;
}