class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        const int s = original.size();
        if (s != m * n) {
            return {};
        }

        vector<vector<int>> matrix(m, vector<int>(n));

        int row = 0;
        for (int i = 0; i < m; i++) {
            vector<int> temp(original.begin() + i * n,
                             original.begin() + (i + 1) * n);
            matrix[i] = temp;
        }

        return matrix;
    }
};