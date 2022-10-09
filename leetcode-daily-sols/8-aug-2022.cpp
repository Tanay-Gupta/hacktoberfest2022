class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=nums[0]+nums[1]+nums[2];

        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                int temp=nums[i]+nums[l]+nums[r];
                if(abs(target-temp)<abs(target-sum)) sum=temp;
                
                else if(temp>target)r--;
                else if(target>temp) l++;
                else return target;
            }
        }
        
        return sum;
    }
};