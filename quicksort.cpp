#include<bits/stdc++.h>
using namespace::std;
int quicksort(vector<int> arr[])
{
    if(arr.size()<2)
    {
        return arr;
    }
    int pivot=arr[0];
    vector<int> less;
    vector<int> more;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]<pivot)
        {
            less.push_back(arr[i]);
        }
        else
        {
            more.push_back(arr[i]);
        }
        
    }
    quicksort(less).push_back(pivot);
    quicksort(more);
    less.insert(less.end(),more.begin(),more.end());
    return less;
}
int main()
{
    vector<int> arr[5]={1,2,4,5,2};
    quicksort(arr);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}