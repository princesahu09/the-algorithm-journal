1class Solution {
2public:
3    string findCommonResponse(vector<vector<string>>& responses) {
4
5        unordered_map<string, int> record;
6
7        for (auto& i : responses) {
8            unordered_set<string> review;
9            for (auto& j : i) {
10                review.insert(j);
11            }
12            for (auto& k : review) {
13                record[k]++;
14            }
15        }
16
17        string ans = "";
18        int best = 0;
19
20        for (auto& p : record) {
21            if (p.second > best || (p.second == best && p.first < ans)) {
22                best = p.second;
23                ans = p.first;
24            }
25        }
26
27        return ans;
28    }
29};