class Solution {
    public int maxSubArray(int[] a) {
        
        
        int i;
        int max=a[0];
        int res=a[0];
        
        for(i=1;i<a.length;i++)
        {
            max=Math.max(max+a[i],a[i]);
           // System.out.print(max+" ");
            res=Math.max(res,max);
        }
        return(res);
        
    }
}