#include<iostream>
using namespace::std;

int increment(int *a)
{
    *a++;
    return 0;
}
int main()
{
    int a=2;
    int *p=&a;
    cout<<p;
    cout<<endl<<*p;
    int **q=&p;
    **q+=1;
    cout<<endl<<**q;
    cout<<endl<<a;

    return 0;
}