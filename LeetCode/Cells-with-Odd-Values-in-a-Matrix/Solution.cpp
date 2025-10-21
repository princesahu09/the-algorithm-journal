class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n));

        int i = 0;
        while (i < indices.size()) {

            int row = indices[i][0];
            int col = indices[i][1];

            for (int j = 0; j < n; j++) {
                matrix[row][j] += 1;
            }
            for (int k = 0; k < m; k++) {
                matrix[k][col] += 1;
            }
            i++;
        }

        int odd = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] % 2 != 0)
                    odd++;
            }
        }
        return odd;
    }
};