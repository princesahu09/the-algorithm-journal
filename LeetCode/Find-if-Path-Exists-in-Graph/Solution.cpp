1class Solution {
2public:
3    bool validPath(int n, vector<vector<int>>& edges, int source,
4                   int destination) {
5
6        if (source == destination)
7            return true;
8        if (edges.size() == 0)
9            return false;
10
11        unordered_map<int, list<int>> adjList;
12        for (int i = 0; i < edges.size(); i++) {
13            int u = edges[i][0];
14            int v = edges[i][1];
15            adjList[u].push_back(v);
16            adjList[v].push_back(u);
17        }
18        vector<int> visited(n + 1, false);
19
20        queue<int> q;
21        q.push(source);
22
23        while (q.size() > 0) {
24            int u = q.front();
25            q.pop();
26
27            for (auto& i : adjList[u]) {
28                if (i == destination) {
29                    return true;
30                }
31                if (!visited[i]) {
32                    visited[i] = true;
33                    q.push(i);
34                }
35            }
36        }
37
38        return false;
39    }
40};