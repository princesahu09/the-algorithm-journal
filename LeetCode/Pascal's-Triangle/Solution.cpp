1class Solution {
2public:
3    int nCr(int n, int r) {
4        int res = 1;
5        for (int i = 0; i < r; i++) {
6            res = res * (n - i);
7            res = res / (i + 1);
8        }
9        return res;
10    }
11    vector<vector<int>> solve(int row) {
12        vector<vector<int>> ans;
13        for (int j = 1; j <= row; j++) {
14            int res = 1;
15            vector<int> temp;
16
17            for (int i = 1; i <= j; i++) {
18                int res = nCr(j - 1, i - 1);
19                temp.push_back(res);
20            }
21            ans.push_back(temp);
22        }
23
24        return ans;
25    }
26    vector<vector<int>> generate(int numRows) { return solve(numRows); }
27};