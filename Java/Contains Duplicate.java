class Solution {
    public boolean containsDuplicate(int[] nums) {   
        if(nums == null || nums.length == 0)
            return false;    
      HashSet<Integer> hs = new HashSet<>();
        for(int e:nums){
           if(!hs.add(e))
                return true;
            }    
        return false;
    }
}