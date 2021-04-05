#include<iostream>
using namespace::std;
void duplicates(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string res=s.substr(1);
    if(s[0]==res[0])
    {
        duplicates(res);
    }
    else
    {
        cout<<s[0];
        duplicates(res);
    }
}
int main()
{
    string s;
    cin>>s;
    duplicates(s);
    return 0;
}