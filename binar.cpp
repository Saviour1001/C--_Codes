#include<bits/stdc++.h>
using namespace::std;
bool solve(int num) {
    int length = (int) floor( log10(num) ) + 1;
    int temp=num;
    bool check=true;
    for(int i=0;i<length/2;i++)
    {
        if(num/10*(length-1-i)!=temp%10)
        {
            check=false;
            break;
        }
        temp=temp/10;
    }
    return check;
}
int main()
{
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}