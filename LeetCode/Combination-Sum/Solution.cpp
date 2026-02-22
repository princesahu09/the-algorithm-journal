1class Solution {
2public:
3    set<vector<int>> s;
4    void solve(vector<int>& c, int i, vector<int>& combo,
5               vector<vector<int>>& ans, int target) {
6        if (i == c.size() || target < 0) {
7            return;
8        }
9        if (target == 0) {
10            if (s.find(combo)==s.end()) {
11                ans.push_back(combo);
12                s.insert(combo);
13            }
14
15            return;
16        }
17
18        combo.push_back(c[i]);
19        solve(c, i + 1, combo, ans, target - c[i]);
20        solve(c, i, combo, ans, target - c[i]);
21        combo.pop_back();
22        solve(c, i + 1, combo, ans, target );
23    }
24    vector<vector<int>> combinationSum(vector<int>& c, int target) {
25
26        vector<vector<int>> ans;
27        vector<int> combo;
28        solve(c, 0, combo, ans, target);
29        return ans;
30    }
31};