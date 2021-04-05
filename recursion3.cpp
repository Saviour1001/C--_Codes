#include<iostream>
using namespace::std;
void rev(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string res=string(s.substr(1));
    rev(res);
    cout<<s[0];
}
int main()
{
    string s;
    cin>>s;
    rev(s);
    return 0;
}