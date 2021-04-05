#include<iostream>
#include<string>
using namespace::std;

int main()
{
    string s1="aaaaaaaaaannnnnnnnssmmmmmmswwwwwwe";
    char s2[100];
    s2[0]=s1[0];
    int cnt=1;
    for(int i=1;i<s1.size();i++)
    {
        if(s1[i]!=s1[i-1])
        {
            s2[cnt]=s1[i];
            cnt++;
        }

    }
    cout<<s2;
    return 0;
}