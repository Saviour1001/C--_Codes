#include<iostream>
using namespace::std;
int permutation(int arr[],int n)
{
    if(n==0)
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        cout<<temp;
        cout<<permutation(arr,n-1);
    }

}