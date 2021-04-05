#include<iostream>
#include<vector>
#include<algorithm>
using namespace::std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(5);
    v.push_back(7);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    random_shuffle(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}