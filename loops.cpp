#include<iostream>
using namespace::std;
int main()
{
int n=10;
int fact=1;
for (int i=1;i<=n;i++){
    fact=fact*i;
}
cout<<"The factorial of 10 is "<<fact;
return 0;
}