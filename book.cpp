#include<bits/stdc++.h>
using namespace::std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    /*for(auto x:s)
    {
        cout<<x<<endl;
    }
    cout<<s.count(1);*/
   
    map<string,int> a;
    a["You"]=1;
    a["Suck"]=2;

    for(auto x:a)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
     return 0;
}