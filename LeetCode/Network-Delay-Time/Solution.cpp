1class Solution {
2public:
3    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
4
5        unordered_map<int, list<pair<int, int>>> adjList;
6
7        for (int i = 0; i < times.size(); i++) {
8            int u = times[i][0];
9            int v = times[i][1];
10            int t = times[i][2];
11
12            adjList[u].push_back({v, t});
13        }
14
15        vector<int> dist(n + 1, INT_MAX);
16        dist[k] = 0;
17
18        for (int i = 1; i <= n - 1; i++) {
19            for (int u = 1; u <= n; u++) {
20
21                for (auto& e : adjList[u]) {
22                    if (dist[u] != INT_MAX &&
23                        dist[e.first] > dist[u] + e.second) {
24                        dist[e.first] = dist[u] + e.second;
25                    }
26                }
27            }
28        }
29        int ans = 0;
30
31        for (int i = 1; i <= n; i++) {
32            if (i == k) {
33                continue;
34            }
35            if (dist[i] == INT_MAX) {
36                return -1;
37            }
38            ans = max(ans, dist[i]);
39        }
40
41        return ans;
42    }
43};