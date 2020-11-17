#include<iostream>
using namespace::std;
int main()
{
    int n;
    cin>>n;
    int sum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            
            sum+=arr[j];
            cout<<sum<<endl;
        }
        
    }
return 0;
}
