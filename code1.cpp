#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int arr[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	sort(arr,arr+n);
    for(int i=0;i<m;i++)
    {
        int j;
        cin>>j;
        if(j<arr[0])
        {
            count++;
        }
    }
    cout<<count*n;
	return 0;
}
