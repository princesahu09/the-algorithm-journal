1class Solution {
2public:
3    int maxCount(int m, int n, vector<vector<int>>& ops) {
4
5        if (ops.size() == 0) {
6            return m * n;
7        }
8
9        for (auto i : ops) {
10            m = min(m, i[0]);
11            n = min(n, i[1]);
12        }
13        return m * n;
14    }
15};