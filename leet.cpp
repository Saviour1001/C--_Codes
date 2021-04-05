#include<bits/stdc++.h>
using namespace::std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int length=s.length();
        int lower=0;int digit=0;int upper=0;
        vector <int> triplets;
        int changes=0;
        cout<<length;
        for(int i=0;i<length;i++)                         //Counting everything 
        {
            if(isdigit(s[i]))
            {
                digit+=1;
            }
            if(islower(s[i]))
            {
                lower+=1;
            }
            if(isupper(s[i]))
            {
                upper+=1;
            }
            if(s[i]==s[i+1] && s[i]==s[i+2])
            {
                triplets.push_back(i);
            }
        }
        if(length>=6 && length<=20 && digit>0 && lower>0 && upper>0 && triplets.size()==0)
        {
            cout<<"0";  //Perfect password woohoo 
            continue;
        }
        if(triplets.size()==0)
        {
            if(length>=6 && length<=20)
            {
                if(digit==0)
                {
                    changes+=1;
                }
                if(lower==0)
                {
                    changes+=1;
                }
                if(upper==0)
                {
                    changes+=1;
                }
            }
        }
    }
}