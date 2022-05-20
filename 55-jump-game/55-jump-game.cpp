class Solution {
public:
 bool canJump(vector<int>& nums) {
        if(nums.size()==1)return true;
        int x=0,y=0;
        for (int i = 0; i <nums.size() ; ++i) {
            int z=i+x;
            if(z>=nums.size()-1)return true;
           if(nums[i]==0){
               if(i+x<=i)
                   return false;
           } else
           {
               if(x<=nums[i]||x+i==i)
               {
                   x=nums[i];

               }
           }
           x--;
        }
        return false;
    }
};