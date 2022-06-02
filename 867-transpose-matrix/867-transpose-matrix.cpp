class Solution {
public:
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
     vector<vector<int>>v;
     for (int i = 0; i < matrix[0].size(); ++i) {
            vector<int>vv;
         for (int j = 0; j <matrix.size() ; ++j) {
             vv.push_back(matrix[j][i]);
         }
         v.push_back(vv);
        }
     return v;
    }
};