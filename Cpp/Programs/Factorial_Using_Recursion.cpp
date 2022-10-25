#include<iostream>
using namespace std;

int Factorial(int n)
{
    if (n==0 || n==1)
    return n;
    else
    return (n*Factorial(n-1));
}
int main()
{
    int num,Fact;
    cout<<"Enter a number : ";
    cin>>num;
    Fact=Factorial(num);
    cout<<"Factorial of "<<num<<" is "<<Fact;
}
