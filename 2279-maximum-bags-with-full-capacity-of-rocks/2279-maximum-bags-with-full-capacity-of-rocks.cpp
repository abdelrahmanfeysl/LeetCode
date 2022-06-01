class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count = 0;
        for (int i = 0; i <capacity.size() ; ++i) {
            capacity[i] -=rocks[i];
        }
        sort(capacity.begin(), capacity.end());
    
            for (int i = 0; i <capacity.size() ; ++i) {
                if( capacity[i]<=additionalRocks)
                {
                    count++;
                    additionalRocks-=capacity[i];
                }
                if(!additionalRocks)break;
            }
        
        return count;
    }
};