#include<numeric>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace::std;
int main()
{
    vector <int> p(4,50);
    p.push_back(1);
    p.push_back(2);
    
    vector<int>::iterator it;
    sort(p.begin(),p.end());
    for(auto element:p)
    {
        //cout<<element<<" ";
    } 
    int n=5;
    int m=5;
    int sum=accumulate(p.begin(),p.end(),400);
    //cout<<sum;
    vector<pair<int,int>> r;
    for(int i=0;i<2;i++)
    {
        r.push_back(make_pair(m,n));
    }
    
    return 0;
}