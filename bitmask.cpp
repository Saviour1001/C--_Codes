#include<iostream>
using namespace::std;
void add(int &set,int x)
{
    set=set| 1<<(x-1);
}
void remove(int &set,int x)
{
    set=set ^ 1<<(x-1);
}
void display(int set)
{
    for(int bit_no=0;bit_no<32;bit_no++)
    {
        if(set & 1<<bit_no)
        {
            cout<<bit_no+1<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int set=15;
    display(set);
    add(set,31);
    display(set);
    remove(set,4);
    display(set);

    return 0;
}