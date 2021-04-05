#include <iostream>
using namespace std;
bool checker(int arr[],int n,int k)
{
    int count=0;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+arr[i];
        if(sum>0)
        {
            count+=1;
        }
    }
    
    return count==k;
}
void printArray(int arr[],int n)
{
    for(int i=1;i<=n;i++)
            {
                cout<<arr[i]<<" ";
            }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
    cout<<t*-1<<"------";
	while(t--)
	{
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=1;i<=n;i++)
            {
                arr[i]=i;
            }
        
        if(n==k)
        {
            printArray(arr,n);
            return 0;
        }
        else
        {
            for(int i=n;i>0;i--)
            {
                arr[i]=arr[i]*-1;
                
                if(!checker(arr,n,k))
                {
                    arr[i]=arr[i]*-1;
                }
            }            
        }
        printArray(arr,n);
        return 0;
        
        

    }
    return 0;
}