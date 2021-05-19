#include<bits/stdc++.h>
using namespace::std;
int main()
{
    map<string,int> m;
    string s;
    cin>>s;
    for(auto letters:s)
    {
        cout<<letters<<" "<<"\n";
        m["letters"]=1;
    }
    cout<<m["yo"]<<"\n";
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<"\n";
    }
    cout<<m.count("yo");
}