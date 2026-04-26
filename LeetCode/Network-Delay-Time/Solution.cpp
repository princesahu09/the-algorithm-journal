1class Solution {
2public:
3    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
4
5        unordered_map<int, list<pair<int, int>>> adjList;
6
7        for (int i = 0; i < times.size(); i++) {
8            int u = times[i][0];
9            int v = times[i][1];
10            int w = times[i][2];
11
12            adjList[u].push_back({v, w});
13        }
14
15        vector<int> dist(n + 1, INT_MAX);
16        dist[k] = 0;
17
18        priority_queue<pair<int, int>, vector<pair<int, int>>,
19                       greater<pair<int, int>>>
20            pq;
21
22        pq.push({0, k});
23
24        while (pq.size() > 0) {
25            int u = pq.top().second;
26            pq.pop();
27
28            for (auto& i : adjList[u]) {
29
30                int v = i.first;
31                int t = i.second;
32                if (dist[v] > dist[u] + t) {
33                    dist[v] = dist[u] + t;
34                    pq.push({dist[v], v});
35                }
36            }
37        }
38
39        int ans = 0;
40
41        for (int i = 1; i <= n; i++) {
42
43            if (i == k)
44
45            {
46                continue;
47            }
48
49            if (dist[i] == INT_MAX) {
50                return -1;
51            }
52            ans = max(ans, dist[i]);
53        }
54
55        return ans;
56    }
57};