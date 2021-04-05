#include<iostream>
using namespace::std;
int getBit(int n,int i)
{
    return (n & (1<<i))!=0;
}
int setBit(int n,int i)
{
    return n | (i<<i);
}
int clearBit(int n,int i)
{
    return n ^ (1<<i);
}
int main()
{
    //cout<<getBit(5,2);
    //cout<<setBit(5,1);
    cout<<clearBit(5,2);
    return 0;
}