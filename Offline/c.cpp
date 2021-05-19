#include<bits/stdc++.h>
using namespace::std;

int ones(int num)
{
    return bitset<8>(num).count();
}

int main()
{
    string s;
    cin>>s;
    bitset<26> letters;
    for(auto x:s)
    {
        letters[x-'a']=1;
    }
    for(int i=0;i<26;i++)
    {
        // cout<<letters[i]<<" ";
    }
    cout<<ones(7);
}