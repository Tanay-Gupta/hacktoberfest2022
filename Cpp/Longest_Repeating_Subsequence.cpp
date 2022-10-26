//https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/0

#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	    int solve(string str,int n,int i,int j,vector<vector<int>> &dp){
	        if(i==n)
	            return 0;
	        if(j==n)
	            return 0;
	        
	        int maxi=INT_MIN;
	        if(dp[i][j]!=-1)
	            return dp[i][j];
	        
	        if(str[i]==str[j] && i!=j)
	            return 1+solve(str,n,i+1,j+1,dp);
	        else{
	            maxi=max(solve(str,n,i+1,j,dp),solve(str,n,i,j+1,dp));
	            dp[i][j]=maxi;
	            return dp[i][j];
	        }
	    }
	
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    vector<vector<int>> dp(str.length()+1,vector<int>(str.length()+1,-1));
		    return solve(str,str.length(),0,0,dp);
		}

};

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string str;
        cin>>str;
        Solution obj;
        int ans=obj.LongestRepeatingSubsequence(str);
        cout<<ans<<"\n";
    }
    return 0;
}