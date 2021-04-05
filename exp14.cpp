#include<iostream>
using namespace::std;
int unique(int arr[], int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    return xorsum;

}
int swap(int a,int b)
{
    a^=b;
    b^=a;
    a^=b;
    cout<<a<<" "<<b;
    return 0;
}
int main()
{
    /*int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<unique(arr,n);
    return 0;*/
    int a=10,b=20;
    swap(a,b);
    return 0;
}