#include<iostream>
using namespace::std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int count=0;
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            arr[i]=-i;
        }
        if(n==k)
        {
            for(int i=1;i<=n;i++)
            {
                arr[i]=i;
            }
        }
        for(int i=1;i<=n;i+=2)
        {
            arr[i]=i;
            count+=1;
            
            if(count==k)
            {
                break;
            }
        }
        if((n%2==0) && count<k)
        {
            for(int i=n;i>=1;i-=2)
            {
                arr[i]=i;
                count+=1;
                if(count==k)
                {
                    break;
                }
            }
        }
        if((n%2==1)&& count<k)
        {
            for(int i=n-1;i>=1;i-=2)
            {
                arr[i]=i;
                count+=1;
                if(count==k)
                {
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

    }
    
    return 0;
}
