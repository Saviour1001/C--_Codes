#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int inputs,input_array[INT_MAX],temp;
	cin>>inputs;
	for(int i=0;i<inputs;i++)
	{
	    cin>>input_array[i];
	    temp=input_array[i];
	    input_array[i]=0;
	    while(temp!=0)
	    {
	        input_array[i]=input_array[i]*10+temp%10;
	        temp=temp/10;
	    }
	}
	for(int i=0;i<inputs;i++)
	{
	    cout<<input_array[i]<<endl;
	}
	return 0;
}
