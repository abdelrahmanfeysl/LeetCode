class Solution {
public:
 int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int x=0;
        if(k==0)
        {
            set<int>s;
            for(int i=0; i<nums.size(); i++){
                s.insert(nums[i]);
            }
            return s.size();
        }
        for (int i = nums.size()-1; i>= 0 ; --i) {
            for (int j = 0; j <nums.size(); ++j) {
                if(nums[i]-nums[j]<=k)
                {
                    x++;
                    i=j;
                    break;
                }
            }
        }
        return x;
    }
};