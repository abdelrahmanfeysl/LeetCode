class Solution {
public:
       vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        for (int i = 0; i <candies.size() ; ++i) {
            candies[i]+=extraCandies;
            int E =*max_element(candies.begin(),candies.end());
            if(E==candies[i])
                v.push_back(true);
            else
                v.push_back(false);
            candies[i]-=extraCandies;
        }
        return v;
    }
};