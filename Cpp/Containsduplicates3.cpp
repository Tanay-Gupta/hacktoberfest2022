 bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff)
    {
        vector<pair<long long,int>> vp;
        
        for(int i=0;i<nums.size();i++)
        {
            vp.push_back(make_pair(nums[i],i));
        }
        
        sort(vp.begin(),vp.end());
        
        for(int i=0;i<vp.size()-1;i++)
        {
          for(int j=i+1;j<vp.size()&&vp[j].first-vp[i].first<=valueDiff;j++)
          {
              if(abs(vp[i].second-vp[j].second) <= indexDiff)
                      return true;
          }
        }
        
        return false;
    }
