1class Solution {
2
3    int diameter(int[][] edge) {
4        int n = edge.length + 1;
5        List<List<Integer>> adjList = new ArrayList<>();
6        for (int i = 0; i < n; i++) {
7            adjList.add(new ArrayList<>());
8        }
9
10        for (int i = 0; i < edge.length; i++) {
11            int u = edge[i][0];
12            int v = edge[i][1];
13
14            adjList.get(u).add(v);
15            adjList.get(v).add(u);
16        }
17
18        int[] degree = new int[n];
19        for (int i = 0; i < n; i++) {
20            degree[i] = adjList.get(i).size();
21        }
22
23        Queue<Integer> q = new ArrayDeque<>();
24
25        for (int i = 0; i < n; i++) {
26            if (degree[i] == 1) {
27                q.offer(i);
28            }
29        }
30
31        int radius = 0;
32
33        while (n > 2) {
34
35            int size = q.size();
36
37            for (int i = 0; i < size; i++) {
38                int node = q.poll();
39                n--;
40
41                for (int v : adjList.get(node)) {
42                    degree[v]--;
43                    if (degree[v] == 1) {
44                        q.offer(v);
45                    }
46                }
47            }
48
49            radius++;
50
51        }
52
53        if (n == 2) {
54            return radius * 2 + 1;
55        }
56
57        return 2 * radius;
58    }
59
60    public int minimumDiameterAfterMerge(int[][] edges1, int[][] edges2) {
61
62        int d1 = diameter(edges1);
63        int d2 = diameter(edges2);
64
65        int r1 = (d1 + 1) / 2;
66        int r2 = (d2 + 1) / 2;
67        int cross = r1 + 1 + r2;
68        return Math.max(
69                Math.max(d1, d2),
70                cross);
71
72    }
73}