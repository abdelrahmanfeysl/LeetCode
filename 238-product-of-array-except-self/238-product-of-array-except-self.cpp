class Solution {
public:
   vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>v;
        int x=1;
        auto z= find(nums.begin(), nums.end(),0);
        if (z==nums.end()){
        for (int num : nums) {
            x*=num;
        }
        for (int num : nums) {
            v.push_back(x/num);
        }} else{
            for(auto c=nums.begin(); c!=nums.end();c++)
            {
                if(c!=z)
                {
                    x*=*c;
                }
            }
            for(auto c=nums.begin(); c!=nums.end();c++)
            {
                if(c!=z)
                {
                    v.push_back(0);
                } else
                    v.push_back(x);
            }
        }
        return v;
    }
};