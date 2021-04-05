#include<iostream>
using namespace::std;
int main()
{
    int n;
    int total=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    /*for(int i=1;i<n-1;i++)
    {
        int left_max=0;
        int right_max=0;
        for(int j=i;j<n;j++)
        {
            right_max=max(right_max,arr[j]);

        }
        for(int j=i;j>=0;j--)
        {
            left_max=max(left_max,arr[j]);
        }
        
        total+=min(left_max,right_max)-arr[i];
    }*/
    int left[n];int right[n];
    left[0]=arr[0];
    right[n-1]=arr[n-1];

    for(int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        total+=min(left[i],right[i])-arr[i];
    }
    cout<<"Total ----> "<<total<<endl;
    return 0;
}