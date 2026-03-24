1class Solution {
2public:
3    bool areSimilar(vector<vector<int>>& mat, int k) {
4
5        auto org = mat;
6
7        int n = mat[0].size();
8        k %= n;
9
10        for (int i = 0; i < mat.size(); i++) {
11            if (i % 2 == 0) {
12
13                reverse(mat[i].begin(), mat[i].begin() + k);
14                reverse(mat[i].begin() + k, mat[i].end());
15                reverse(mat[i].begin(), mat[i].end());
16
17            } else {
18
19                reverse(mat[i].begin(), mat[i].end());
20                reverse(mat[i].begin(), mat[i].begin() + k);
21                reverse(mat[i].begin() + k, mat[i].end());
22            }
23        }
24
25        return org == mat;
26    }
27};