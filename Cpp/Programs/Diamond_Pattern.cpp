#include<iostream>
using namespace std;
int main()
{
    int r,i,j,k;
    cout<<"Enter no. of rows after which u want to mirror image below of above : ";
    cin>>r;
    cout<<"Diamond Pattern : \n";
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        cout<<" ";
        for(k=1;k<=((2*i)-1);k++)
        cout<<"*";
        cout<<"\n";
    }
    for(i=1;i<r;i++)
    {
        for(j=1;j<=i;j++)
        cout<<" ";
        for(k=1;k<=((2*r)-(2*i)-1);k++)
        cout<<"*";
        cout<<"\n";
    }
}