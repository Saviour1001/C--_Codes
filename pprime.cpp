#include <bits/stdc++.h>
using namespace std;


int primefactor(int n)
{
    int spf[n];
    for(int i=2;i<=n;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
    int sum=0;
    while(n!=1)
    {
        sum+=spf[n];
        n=n/spf[n];
    }
    return sum;
}


int main() {
    
	int t;
	cin>>t;

	while(t--)
	{
	    int n;
        cin>>n;
	    double arr[100000];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
            
	    }
	    int sum[n];
	    for(int i=0;i<n;i++)
	    {
	        sum[i]=primefactor(arr[i]);
	    }
	    sort(sum,sum+n,greater<int>());
	    for(int i=0;i<n;i++)
	    {
	        cout<<sum[i]<<" ";
	    }
        cout<<"\n";

    }
	return 0;
}
