#include<iostream>
using namespace::std;
string removeX(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string res=removeX(s.substr(1));
    if(ch=='x')
    {
        return res+"x";
    }
    else
    {
        return ch+res;
    }
    

}
int main()
{
    string s;
    cin>>s;
    cout<<removeX(s);
    return 0;
}