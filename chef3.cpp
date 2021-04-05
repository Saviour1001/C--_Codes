#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,d;
	    cin>>n>>d;
	    int age[n];
        int at_risk=0;
        for(int i=0;i<n;i++) 
        {
            cin>>age[i];
            if(age[i]>=80 || age[i]<=9)
            {
                at_risk+=1;
            }
        }
        int normal=n-at_risk;
        int days=0;
        if(normal%d==0)
        {
            days+=normal/d;
        }
        else
        {
            days+=normal/d+1;
        }
        if(at_risk%d==0)
        {
            days+=at_risk/d;
        }
        else
        {
            days+=at_risk/d+1;
        }
        cout<<days<<endl;

	}
	return 0;
}
