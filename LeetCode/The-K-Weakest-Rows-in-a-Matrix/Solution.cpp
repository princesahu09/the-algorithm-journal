1class Solution {
2public:
3    vector<int> kWeakestRows(vector<vector<int>>& grid, int k) {
4        const int m = grid.size();
5        const int n = grid[0].size();
6
7        vector<pair<int, int>> simple;
8
9        int start = 0;
10
11        for (auto& i : grid) {
12            simple.push_back({accumulate(i.begin(), i.end(), 0), start});
13            start++;
14        }
15
16        sort(simple.begin(), simple.end(), [](auto& a, auto& b) {
17            if (a.first == b.first)
18                return a.second < b.second;
19            return a.first < b.first;
20        });
21
22        vector<int> ans;
23        int end = 0;
24        while (k-- > 0) {
25            ans.push_back(simple[end].second);
26            end++;
27        }
28
29        return ans;
30    }
31};