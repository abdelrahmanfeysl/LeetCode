class Solution {
public:
  int firstMissingPositive(vector<int>& nums) {
     sort(nums.begin(), nums.end());
     int x=1;
        for (int i = 0; i <nums.size() ; ++i) {
           if(i>0){ if(nums[i]==nums[i-1])continue;}
            if(nums[i]>0)
            {
                if(x==nums[i])
                    x++;
                else
                    return x;
            }
        }
        return x;
    }
};