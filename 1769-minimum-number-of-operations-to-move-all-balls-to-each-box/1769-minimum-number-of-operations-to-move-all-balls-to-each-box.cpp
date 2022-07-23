class Solution {
public:
    vector<int> minOperations(string boxes) {
     vector<int>sum;
     int c=0;
        for (int i = 0; i <boxes.size() ; ++i) {
            for (int j = 0; j <boxes.size() ; ++j) {
                if(j!=i)
                {
                    if(boxes[j]=='1')
                        c+=abs(j+1-(i+1));
                }
            }
            sum.push_back(c);
            c=0;
        }
        return sum;
    }
};