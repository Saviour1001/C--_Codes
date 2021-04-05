#include<iostream>
using namespace::std;
int main()
{
    int a[3][4];
    int b[4][3];
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<4;k++)
            {
                c[i][j]+=a[i][k]*b[k][j]
            }

        }
    }
}