class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0,element=prices[0];
        for (int i = 1; i <prices.size(); ++i) {
                 if(prices[i]<element)
                    element=prices[i];
                 else 
                     m=max(prices[i]-element,m);
        }
        return m;
    }
};