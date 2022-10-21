class Solution {
    public int specialArray(int[] nums) {
        int h=nums.length;
        int l=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            int c=0;
            for(int i=0;i<nums.length;i++){
                if(nums[i]>=mid) c++;
            }
            if(c==mid) return mid;
            if(c>mid)
                l=mid+1;
            else 
                h=mid-1;
        }
        return -1;
    }
}