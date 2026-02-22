1class Solution {
2public:
3    int diagonalSum(vector<vector<int>>& mat) {
4        int n = mat.size();
5        return accumulate(mat.begin(), mat.end(), 0, [i=0,n](int acc, auto &row) mutable {
6            return acc + row[i] + row[n-1-i++];
7        }) - (n%2 ? mat[n/2][n/2] : 0);
8    }
9};
10