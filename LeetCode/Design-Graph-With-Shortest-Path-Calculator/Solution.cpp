1class Graph {
2public:
3    vector<vector<int>> dist;
4    int n;
5    void floyd(vector<vector<int>>& mat, int n) {
6
7        for (int k = 0; k < n; k++) {
8            for (int i = 0; i < n; i++) {
9
10                for (int j = 0; j < n; j++) {
11
12                    if (mat[i][k] != INT_MAX && mat[k][j] != INT_MAX) {
13
14                        if (mat[i][j] == INT_MAX) {
15                            mat[i][j] = mat[i][k] + mat[k][j];
16                        } else {
17                            mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
18                        }
19                    }
20                }
21            }
22        }
23    }
24    void addEdge(vector<int> edge) {
25
26        int u = edge[0];
27        int v = edge[1];
28        int w = edge[2];
29
30        dist[u][v] = min(dist[u][v], w);
31        for (int i = 0; i < n; i++) {
32            for (int j = 0; j < n; j++) {
33
34                if (dist[i][u] != INT_MAX && dist[v][j] != INT_MAX) {
35                    dist[i][j] = min(dist[i][j], dist[i][u] + w + dist[v][j]);
36                }
37            }
38        }
39    }
40    Graph(int m, vector<vector<int>>& edges) {
41        n = m;
42
43        dist = vector<vector<int>>(n, vector<int>(n, INT_MAX));
44        for (int i = 0; i < n; i++) {
45
46            dist[i][i] = 0;
47        }
48
49        for (auto& i : edges) {
50            addEdge(i);
51        }
52
53        floyd(dist, n);
54    }
55
56    int shortestPath(int node1, int node2) {
57
58        int ans = dist[node1][node2];
59
60        return ans == INT_MAX ? -1 : ans;
61    }
62};
63
64/**
65 * Your Graph object will be instantiated and called as such:
66 * Graph* obj = new Graph(n, edges);
67 * obj->addEdge(edge);
68 * int param_2 = obj->shortestPath(node1,node2);
69 */