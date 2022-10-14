#include<bits/stdc++.h>
using namespace std;

void solve(){
   double a,b,x,y;
   cin>>a>>b>>x>>y;
   x=a/x;
   y=b/y;
   if(x > y)
   cout<<"chefina"<<" ";
   else if(x==y)
   cout<<"both"<<" ";
   else
   cout<<"chef"<<" ";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();cout<<endl;
    }
}