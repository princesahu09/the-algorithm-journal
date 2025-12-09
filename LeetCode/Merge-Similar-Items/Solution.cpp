1class Solution {
2public:
3    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
4                                          vector<vector<int>>& items2) {
5        unordered_map<int, int> occ;
6        for (int i = 0; i < items1.size(); i++) {
7            int value = items1[i][0];
8            int weight = items1[i][1];
9            occ[value] += weight;
10        }
11        for (int i = 0; i < items2.size(); i++) {
12            int value = items2[i][0];
13            int weight = items2[i][1];
14            occ[value] += weight;
15        }
16
17        vector<vector<int>> ans;
18        for (auto& i : occ) {
19            ans.push_back({i.first, i.second});
20        }
21        sort(ans.begin(), ans.end(),
22             [](const vector<int>& a, vector<int>& b) { return a[0] < b[0]; });
23        return ans;
24    }
25};