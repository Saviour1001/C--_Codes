#include<iostream>
using namespace::std;
int main()
{
    int  n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr[i][j]=0;
        }
    }
    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;
    int k=1;
    
    while(row_start<=row_end && column_start<column_end)
    {
        for(int i=column_start;i<=column_end;i++)
        {
            arr[row_start][i]=k;
            k+=1;         
        }
        row_start+=1;
        for(int i=row_start;i<=row_end;i++)
        {
            arr[i][column_end]=k;
            k+=1;
        }
        column_end-=1;
        for(int i=column_end;i>=column_start;i--)
        {
            arr[row_end][i]=k;
            k+=1;
        }
        row_end-=1;
        for(int i=row_end;i>=row_start;i--)
        {
            arr[i][column_start]=k;
            k+=1;
        }
        column_start+=1;
        
    }
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
}