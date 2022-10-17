#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,ans=0;
        cin>>n;
        int arr1[n];
        int arr2[n];
        int x=0,y=0,z=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
            
        }
        for (int i = 0; i < n; i++)
        {
            cin>>arr2[i];
            
        }
        for (int i = 0; i < n; i++)
        {
         if (arr1[i]==1)
            {
                x++;
            }
         if (arr2[i]==1)
            {
                y++;
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            if (arr1[i]==arr2[i])
            {
                z++;
            }
            
        }
         for (int i = 0; i < n; i++)
        {
            if (abs(x-y)==abs(n-z))
            {
                ans=abs(x-y);
            }
            else
            {
                ans=abs(x-y)+1;
            }
            
        }
        
        cout<<ans<<endl;

    }
    return 0;
}