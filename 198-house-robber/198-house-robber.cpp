class Solution {
public:
 int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        for (int i = 2; i <nums.size() ; ++i) {
            if(i==2)
                nums[i] +=nums[0];
            else
                nums[i]+=max(nums[i-2],nums[i-3]);
        }
        return max(nums[nums.size()-1],nums[nums.size()-2]);
    }
};