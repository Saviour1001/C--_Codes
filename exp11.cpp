#include<iostream>
using namespace::std;

int check(int n)
{
    int count=0;
    while(n)
    {
        n=n&n-1;
        count++;
    }
    return count;
    
}
int main()
{
    int n;
    cin>>n;
    cout<<endl<<check(n);
    return 0;
}