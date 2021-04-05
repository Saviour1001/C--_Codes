#include<bits/stdc++.h>
using namespace::std;
int main()
{
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    cout<<lower_bound(arr.begin(),arr.end(),5)-arr.begin();
    return 0;
}