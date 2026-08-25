1class Solution {
2
3    class Pair {
4        int node;
5        int time;
6
7        Pair(int node, int time) {
8            this.node = node;
9            this.time = time;
10        }
11    }
12
13    Pair bfs(int start, List<List<Integer>> adjList, int n) {
14
15        boolean[] visited = new boolean[n];
16        Arrays.fill(visited, false);
17
18        Queue<Pair> q = new ArrayDeque<>();
19        Pair far = new Pair(start, 0);
20        q.offer(far);
21        visited[start] = true;
22
23        while (q.size() > 0) {
24
25            Pair cur = q.poll();
26            int time = cur.time;
27            // visited[cur.node] = true;
28            if (cur.time > far.time) {
29                far = cur;
30            }
31            for (Integer v : adjList.get(cur.node)) {
32                if (!visited[v]) {
33                    visited[v] = true;
34                    q.offer(new Pair(v, time + 1));
35                }
36
37            }
38
39        }
40
41        return far;
42
43    }
44
45    int diameter(int[][] edge) {
46
47        int n = edge.length + 1;
48        List<List<Integer>> adjList = new ArrayList<>();
49        for (int i = 0; i < n; i++) {
50            adjList.add(new ArrayList<>());
51        }
52
53        for (int i = 0; i < edge.length; i++) {
54            int u = edge[i][0];
55            int v = edge[i][1];
56
57            adjList.get(u).add(v);
58            adjList.get(v).add(u);
59        }
60
61        Pair first = bfs(0, adjList, n);
62
63        Pair far = bfs(first.node, adjList, n);
64
65        return far.time;
66
67    }
68
69    public int minimumDiameterAfterMerge(int[][] edges1, int[][] edges2) {
70
71        int d1 = diameter(edges1);
72       // System.out.println(d1);
73        int d2 = diameter(edges2);
74       // System.out.println(d2);
75
76        int r1 = (d1 + 1) / 2;
77        int r2 = (d2 + 1) / 2;
78        int cross = r1 + 1 + r2;
79        return Math.max(
80                Math.max(d1, d2),
81                cross);
82
83    }
84}