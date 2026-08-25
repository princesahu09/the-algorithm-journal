1class Solution {
2    public List<Integer> findMinHeightTrees(int n, int[][] edges) {
3
4        List<Integer> ans = new ArrayList<>();
5        if (n == 1) {
6            ans.add(0);
7            return ans;
8        }
9
10        List<List<Integer>> adjList = new ArrayList<>();
11        for (int i = 0; i < n; i++) {
12            adjList.add(new ArrayList<>());
13        }
14
15        for (int i = 0; i < edges.length; i++) {
16            int u = edges[i][0];
17            int v = edges[i][1];
18            adjList.get(u).add(v);
19            adjList.get(v).add(u);
20        }
21
22        int[] indegree = new int[n];
23        // Arrays.fill(indegree, 0);
24
25        for (int i = 0; i < n; i++) {
26            indegree[i] = adjList.get(i).size();
27        }
28
29        Queue<Integer> q = new ArrayDeque<>();
30
31        for (int i = 0; i < n; i++) {
32            if (indegree[i] == 1) {
33                q.offer(i);
34            }
35        }
36
37        while (n > 2) {
38            int size = q.size();
39            for (int i = 0; i < size; i++) {
40                int node = q.poll();
41                n--;
42
43                for (Integer v : adjList.get(node)) {
44                    indegree[v]--;
45                    if (indegree[v] == 1) {
46                        q.offer(v);
47                    }
48
49                }
50            }
51
52        }
53
54        while (!q.isEmpty()) {
55            ans.add(q.poll());
56        }
57
58        return ans;
59
60    }
61}