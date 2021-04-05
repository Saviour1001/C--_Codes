#include<iostream>
using namespace::std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int start=0;
    int end=n-1;
    int x;
    cin>>x;
    /*while(start<=end)
    {
        int k=(start+end)/2;
        if(arr[k]==x)
        {
            cout<<k+1<<endl;
        }
        if(x>arr[k])
        {
            start=k+1;
        }
        else
        {
            end=k-1;
        }
        
    }*/
    int k = 0;
for (int b = n/2; b >= 1; b /= 2) {
while (k+b < n && arr[k+b] <= x) 
{k += b;
cout<<k;}
}
if (arr[k] == x) {
cout<<k;
}
    return 0;
    
}