class Solution {
public:
    int minCost(string colors, vector<int>& t) {
        int ans=0;
        for(int i=0;i<colors.size()-1;i++){
            if(colors[i]==colors[i+1]){
                int temp=min(t[i],t[i+1]);
                ans+=temp;
                t[i+1] = max(t[i],t[i+1]);
            }
        }
        return ans;
    }
};