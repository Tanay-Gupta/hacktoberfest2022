class Solution {
    // \U0001f923\U0001f923\U0001f923\U0001f923\U0001f923\U0001f923\U0001f923\U0001f923
    int[][] dp;
    public int helper(int st, int end,int[] cuts){
        //System.out.print(st+" "+end+" ");
        if(st>end || end <= st+1) return 0;
        if(dp[st][end]!=Integer.MAX_VALUE) return dp[st][end];
        int MinCost = Integer.MAX_VALUE;
        for(int i = st+1; i<end; i++){
            int l = helper(st,i,cuts);
            int r = helper(i,end,cuts);
            MinCost = Math.min(MinCost,cuts[end]-cuts[st]+ l+r);
        }
        dp[st][end] = MinCost;
        return MinCost;
    }
    public int minCost(int n, int[] cuts) {
       
        Arrays.sort(cuts);
        int[] newCuts = new int[cuts.length+2];
        dp = new int[102][102];
        for(int i = 0; i<102;i++){
            for(int j = 0; j<102; j++){
                dp[i][j] = Integer.MAX_VALUE;
            }
        }
        newCuts[0] = 0; newCuts[cuts.length+1] = n;
        for(int i = 1; i<=cuts.length; i++){
            newCuts[i] = cuts[i-1];
        }
        return helper(0,newCuts.length-1,newCuts);
    }
}
