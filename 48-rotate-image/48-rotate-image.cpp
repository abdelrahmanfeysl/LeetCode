class Solution {
public:

    void rotate(vector<vector<int>>& matrix) {
     vector<vector<int>> m;
        for (int i = 0; i <matrix.size() ; ++i) {
            vector<int>c;
            for (int j = matrix.size()-1; j >=0 ; j--) {
                c.push_back(matrix[j][i]);
            }
            m.push_back(c);
        }
        for (int i = 0; i <matrix.size() ; ++i) {
            for (int j = 0; j <matrix.size() ; ++j) {
                matrix[i][j]=m[i][j];
            }
        }
    } 
    
};