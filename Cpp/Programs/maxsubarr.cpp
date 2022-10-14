#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

void problem(void){
    int a;cin>>a;
    vector<int> v1(a);
    for(int i=0;i<a;i++) cin>>v1[i];
    int b;cin>>b;
    vector<int> v2(b);
    for(int i=0;i<b;i++) cin>>v2[i];
    ll mxsoFar = 0,mxHere=0;
    for(int i=0;i<a;i++){
        mxsoFar+=v1[i];
        mxHere = max(mxHere,mxsoFar);
        if(mxsoFar<0) mxsoFar=0;
    }
    for(int i=0;i<v2.size();i++){
        if(v2[i]>0) mxHere+=v2[i];
    }
    cout<<mxHere;
}

int32_t main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;cin>>t;
      #ifdef _DEBUG
    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
      #endif
     #ifdef SIEVE
		sieve();
	#endif
	#ifdef NCR
		init();
	#endif
     while(t--){problem();cout<<"\n";}
    //  problem();cout<<"\n";
     return 0;
}