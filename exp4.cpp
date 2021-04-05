#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace::std;
int main()
{
    string s1(5,'N');
    cout<<s1<<endl;
    string s2;

    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    /*for(int i=0;i<s1.size();i++)
    {
        s1[i]-=32;
    }*/
    cout<<s1;

  
    return 0;
}