1class Solution {
2public:
3    string findCommonResponse(vector<vector<string>>& responses) {
4
5        unordered_map<string, int> record;
6
7        for (auto& i : responses) {
8            unordered_set<string> review(i.begin(),i.end());
9           
10            for (auto& k : review) {
11                record[k]++;
12            }
13        }
14
15        string ans = "";
16        int best = 0;
17
18        for (auto& p : record) {
19            if (p.second > best || (p.second == best && p.first < ans)) {
20                best = p.second;
21                ans = p.first;
22            }
23        }
24
25        return ans;
26    }
27};