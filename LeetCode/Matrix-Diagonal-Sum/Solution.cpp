class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        return accumulate(mat.begin(), mat.end(), 0, [i=0,n](int acc, auto &row) mutable {
            return acc + row[i] + row[n-1-i++];
        }) - (n%2 ? mat[n/2][n/2] : 0);
    }
};
