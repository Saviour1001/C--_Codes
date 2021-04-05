#include<iostream>
#include<string>
#include<algorithm>
using namespace::std;
int main()
{
    string s1="avcadujafujasdas";
    int count[26];
    int maximum=0;
    for(int i=0;i<26;i++) count[i]=0;
    for(int i=0;i<s1.size();i++)
        {count[s1[i]-'a']++;
       
        }
    for(int i=0;i<26;i++)
     maximum=max(maximum,count[i]);
    cout<<maximum<<endl;
    return 0;
    
}