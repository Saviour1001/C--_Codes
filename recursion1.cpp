#include<iostream>
using namespace::std;
int print(int n)
{
    if(n)
    {
        cout<<n<<endl;
        print(n-1);
    }
    return 0;
}
void inc(int n)
{
    if(n==0)
    {
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    inc(n);
    return 0;
}