class Solution {
public:
   vector<int> findDisappearedNumbers(vector<int>& nums) {
       int arr[nums.size()+1];
       vector<int> v;
        for (int i = 0; i <nums.size()+1 ; ++i) {
            arr[i]=0;
        }
        for (int i = 0; i <nums.size() ; ++i) {
            arr[nums[i]]=1;
        }
        for (int i = 1; i <nums.size()+1 ; ++i) {
            if(arr[i]==0)
                v.push_back(i);
        }
        return v;
    }
};