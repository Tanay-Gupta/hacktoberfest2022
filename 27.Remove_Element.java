//import java.util.HashMap;
class Solution {
    public int removeElement(int[] nums, int val) {
        //HashMap<Integer, Boolean> hm = new HashMap<Integer, Boolean>();
        if(nums.length==0)
            return 0;
        int k=0;
        for(int i=0; i<nums.length;i++)
        {
            if(nums[i]!=val)
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
}
