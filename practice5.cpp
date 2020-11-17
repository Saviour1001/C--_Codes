#include<bits/stdc++.h>
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
    int s;
    int found=0;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==s)
            {
                cout<<i+1<<" "<<j+1;
                found=1;
                break;
            }

        }
        if(found==1)
        {
            break;
        }
    }
    return 0;
}