1class Solution {
2
3    int time = 0;
4    int[] dt;
5    int[] low;
6    List<List<Integer>> ans = new ArrayList<>();
7
8    void dfs(int node, boolean[] visited, int parU, List<List<Integer>> adjList) {
9
10        visited[node] = true;
11
12        dt[node] = low[node] = ++time;
13
14        for (Integer v : adjList.get(node)) {
15
16            if (!visited[v]) {
17                dfs(v, visited, node, adjList);
18
19                low[node] = Math.min(low[node], low[v]);
20                if (low[v] > dt[node]) {
21                    ans.add(List.of(node, v));
22                }
23            }
24
25            else if (v != parU) {
26                low[node] = Math.min(low[node], dt[v]);
27            }
28        }
29    }
30
31    public List<List<Integer>> criticalConnections(int n, List<List<Integer>> connections) {
32
33        List<List<Integer>> adjList = new ArrayList<>();
34
35        for (int i = 0; i < n; i++) {
36            adjList.add(new ArrayList<>());
37        }
38
39        for (int i = 0; i < connections.size(); i++) {
40            int u = connections.get(i).get(0);
41            int v = connections.get(i).get(1);
42
43            adjList.get(u).add(v);
44            adjList.get(v).add(u);
45        }
46
47        dt = new int[n];
48        low = new int[n];
49        boolean[] visited = new boolean[n];
50
51        dfs(0, visited, -1, adjList);
52
53        return ans;
54
55    }
56}