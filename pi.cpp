#include<iostream>
#include<random>
using namespace::std;
int main()
{
    int r = ((double) rand() / (RAND_MAX));
    cout<<r<<endl;
    return 0;

}