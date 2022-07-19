class Solution {
public:
int longestConsecutive(vector<int>& nums) {
     sort(nums.begin(), nums.end());
     if(nums.size()==0)return 0;
     int x=1,y=0;
        for (int i = 1; i <nums.size(); ++i) {
            if(nums[i-1]==nums[i])continue;
            if(nums[i-1]==nums[i]-1)
                x++;
            else
            {
                if(x>y)
                    y=x;
                x=1;
            }
        }
        return max(x,y);
    }
};