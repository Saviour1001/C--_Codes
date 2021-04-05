#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    char s[2000];
	    cin>>s;
	    int h;
	    int len=strlen(s);
	    int front[200];
	    if(len%2==0)
	    {
	       h=0;
	    }
	    else
	    {
	        h=1;
	    }
	    for(int i=0;i<200;i++)
	    {
	        front[i]=0;
	    }
	    for(int i=0;i<len/2;i++){
	        front[s[i]]+=1;
	    }
	    for(int i=len/2+h;i<len;i++)
	    {
	        front[s[i]]-=1;
	    }
	    bool lapin=1;
	    for(int i=0;i<200;i++)
	    {
	        if(front[i]!=0)
	        {
	            lapin=0;
	        }
	    }
	    lapin?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
