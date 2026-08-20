1class Solution {
2
3    List<List<Integer>> ans = new ArrayList<>();
4
5    void dfs(int node, boolean[] visited, int target, List<List<Integer>> adjList, List<Integer> path) {
6        path.add(node);
7
8        if (node == target) {
9            ans.add(new ArrayList<>(path));
10
11            path.remove(path.size() - 1);
12
13            return;
14        }
15        visited[node] = true;
16
17        for (Integer v : adjList.get(node)) {
18            if (!visited[v]) {
19
20                dfs(v, visited, target, adjList, path);
21                // path.remove(path.size()-1);
22            }
23        }
24        visited[node] = false;
25        path.remove(path.size() - 1);
26    }
27
28    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
29
30        int n = graph.length;
31
32        List<List<Integer>> adjList = new ArrayList<>();
33
34        for (int i = 0; i < n; i++) {
35            adjList.add(new ArrayList<>());
36        }
37
38        for (int i = 0; i < n; i++) {
39
40            for (int j = 0; j < graph[i].length; j++) {
41                adjList.get(i).add(graph[i][j]);
42
43            }
44        }
45
46        boolean[] visited = new boolean[n];
47
48        dfs(0, visited, n - 1, adjList, new ArrayList<>());
49
50        return ans;
51
52    }
53}