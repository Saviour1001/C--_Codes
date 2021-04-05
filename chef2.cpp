#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b;
	    cin>>a>>b;
	    int even_a,even_b,odd_a,odd_b;
	    if(a%2==0)
	    {
	        even_a=(a+1)/2;
	    }
	    else
	    {
	        even_a=(a-1)/2;
	    }
	    if(b%2==0)
	    {
	        even_b=(b+1)/2;
	    }
	    else
	    {
	        even_b=(b-1)/2;
	    }
	    odd_a=(a+1)/2;
	    odd_b=(b+1)/2;
        cout<<(even_a*even_b)+(odd_b*odd_a)<<endl;
	    
	    
	}
	return 0;
}
