class Solution {
public:
    vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
        int n = matrix.size();        // rows
        int m = matrix[0].size();     // columns
        
       
        vector<vector<int>> result(m, vector<int>(n));

      
        for (int i = 0; i < n; ++i) {
            const vector<int>& row = matrix[i];   
            for (int j = 0; j < m; ++j) {
                result[j][i] = row[j];
            }
        }
        return result;
    }
};
