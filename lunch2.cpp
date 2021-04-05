#include<bits/stdc++.h>
using namespace::std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        int arr[26]={0};
        for(int i=0;i<len;i++)
        {
            arr[s[i]-97]+=1;
        }
        int coin=0;
        int pairs=0;
        for(int i=0;i<26;i++)
        {
            pairs+=arr[i]/2;
        }
        pairs=min(pairs,len/3);

        int elements_paired=pairs*2;

        int single=len-elements_paired;

        int coins=min(pairs,single);
        
        cout<<coins<<"\n";
        
    }
    return 0;
}