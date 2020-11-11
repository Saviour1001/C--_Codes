#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x,y;
	int diff;
	while(t)
	{
	    cin>>x,y;
	    int count=0;
	    diff=y-x;
	    if(diff==0)
	    {
	        return 0;
	    }
	    if(diff%2==1)
	    {
	        if(diff>0)
	        {
	            return 1;
	        }
	        else
	        {return 2;}
	    }
	    else
	    {
	        if(diff<0)
	        {
	            return 1;
	        }
	        if((diff/2)%2==1)
	        {
	            return 4;
	        }
	        else
	        {
	            int num=(diff-1)/2;
	            return 2+num;
	        }
	    }
	    
	}
	return 0;
}
