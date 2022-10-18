class Solution {
    public int singleNonDuplicate(int[] nums) {
      int l=0,h=nums.length-2;
        while(l<=h){
            int m=(l+h)>>1;
            if(nums[m] == nums[m^1]){ //if index is odd-->it will check for backward that is even and if index is odd then it will go for odd index....
                l=m+1;
            }
            else{
                h=m-1;
            }
        }return nums[l];
    }
}