#include<bits/stdc++.h>
using namespace::std;
int main()
{
    set<int> s;
s.insert(3);
s.insert(2);
s.insert(5);
auto it = s.end();it--;
cout << *it << "\n";

}