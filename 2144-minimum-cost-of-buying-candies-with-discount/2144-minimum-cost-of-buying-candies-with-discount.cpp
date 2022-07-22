class Solution {
public:
    int minimumCost(vector<int>& cost) {
     sort(cost.begin(),cost.end());
     int sum=0,x=2;
        for (int i = cost.size()-1; i>= 0 ; --i) {
            if(x!=0)
            {
                sum+=cost[i];
                x--;
            }else
            x=2;
        }
        return sum;
    }
};