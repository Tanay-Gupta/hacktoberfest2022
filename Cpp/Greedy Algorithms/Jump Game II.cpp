
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int jump(vector<int>& nums) {
    int j=0,cr=0,cm=0;
    
    for(int i=0;i<nums.size()-1;i++){
        if(i+nums[i] >cm)
            cm=i+nums[i];
            
        if(i==cr){
            j++;
            cr=cm;
        }
    }
    
    return j;
}

int main()
{
    vector<int> nums = {2,3,1,1,4};

    int ans = jump(nums);
    
    cout << ans;
    return 0;
}
