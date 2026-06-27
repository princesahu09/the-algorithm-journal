1class Solution {
2public:
3    long long nCr(int n, int r) {
4        long long res = 1;
5        r=min(r,n-r);
6        for (int i = 0; i < r; i++) {
7            res = res * (n - i);
8            res = res / (i + 1);
9        }
10        return res;
11    }
12    vector<int> solve(int row) {
13        vector<int> ans;
14
15        for (int i = 1; i <= row+1; i++) {
16            int value = nCr(row, i-1);
17            ans.push_back(value);
18        }
19        return ans;
20    }
21    vector<int> getRow(int rowIndex) { return solve(rowIndex); }
22};