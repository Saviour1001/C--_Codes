#include<bits/stdc++.h>
#define long long ll
using namespace std;
int main(){
    ll t;
    cin>>t;
    vector<ll> l;
    vector<ll> m;
    vector<ll> arr;
    long long int j = 0;
    for (int i = 0; i < t; i++)
    {
        long long int input;
        cin>>input;
        l.push_back(input);
    }
    for (int i = 0; i < t; i++)
    {
        long long int inputs;
        cin>>inputs;
        m.push_back(inputs);
    }
    while (j<l.size()){
        if (j == l.size()-1){
            if (m[m.size()-1] == 1){
                arr.push_back(1);
            }
            else{
                arr.push_back(-1);
            }
        }
        else{
            // vector <long long int> a;
            vector <ll> a = vector<ll> (l.begin()+j,l.end(),1);
        }
    }
    
    
}