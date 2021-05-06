/* Read input from STDIN. Print your output to STDOUT*/
#include<bits/stdc++.h>
using namespace::std;

bool isSubSequence(string str1,string str2, int m, int n)
{
    int j = 0; 
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
 
    return (j == m);
}
int main(int argc, char *a[])
{
    string V;
    cin>>V;
    int n;
    cin>>n;
    int counter=0;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        if(isSubSequence(a,V,a.length(),V.length()))
        cout<<"POSITIVE\n";
        else
        cout<<"NEGATIVE\n";
    }
}
