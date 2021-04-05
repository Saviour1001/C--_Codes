#include<iostream>
using namespace::std;

bool ispowerof2(int n)
{
    return !(n&n-1);
}
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<"Not a power of 2";
        return 0;
    }
    if(ispowerof2(n))
    {
        cout<<"Power of 2\n";
    }
    else
    {
        cout<<"Not a power of 2\n";
    }
    return 0;
    

}