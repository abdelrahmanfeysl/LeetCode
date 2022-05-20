class Solution {
public:
      int deleteAndEarn(vector<int>& nums) {
        int maxx=*max_element(nums.begin(),nums.end());
        int arr[maxx+1],sum=0;
        for(int i=0;i<maxx+1;i++)arr[i]=0;
        for(auto &n:nums)arr[n]+=n;
        for (int i = 2; i <maxx+1 ; i++) {
            if(i==2)
              arr[i]+=arr[0];
            else
                arr[i]+=max(arr[i-2],arr[i-3]);
        }
        return max(arr[maxx-1],arr[maxx]);
    }
};