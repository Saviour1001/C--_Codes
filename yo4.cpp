#include<iostream>
#include<set>
using namespace::std;
int main()
{
    set<int> s={1,3,5,7};
    set<int> p={2,4,6,8};
    set<int> sum=s|p;
    for(auto e:sum)
    {
        cout<<e;
    }
    return 0;
}