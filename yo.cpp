#include<iostream>
using namespace::std;
int main()
{
    int t;int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        arr[0]=9;
        arr[1]=8;
        for(int i=2;i<n;i++)
        {
            arr[i]= (arr[i-1]+1) % 10;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
        }
        cout<<"\n";
    }
    return 0;
}