class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int ans=logs[0][0];
        int mx = logs[0][1];
        for(int i=1;i<logs.size();i++){
            int temp = logs[i][1]-logs[i-1][1];
            if(temp>mx){
                mx=temp;
                ans=logs[i][0];
            }
            else if(temp==mx){
                ans=min(ans,logs[i][0]);
            }
        }
        return ans;
    }
};