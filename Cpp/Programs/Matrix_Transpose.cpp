#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"Enter rows : ";
    cin>>r;
    cout<<"Enter columns : ";
    cin>>c;
    int A[r][c],B[c][r];
    cout<<"Enter matrix elements : \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cin>>A[i][j];
    }
    cout<<"Matrix A : \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cout<<A[i][j]<<"\t";
        cout<<"\n";
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            B[i][j]=A[j][i];
    }
    cout<<"Transpose Of Matrix A : \n";
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        cout<<B[i][j]<<"\t";
        cout<<"\n";
    }
}