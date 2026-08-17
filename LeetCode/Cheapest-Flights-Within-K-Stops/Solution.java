1class Solution {
2
3    class Tuple {
4        int node;
5        int cost;
6        int stop;
7
8        Tuple(int node, int cost, int stop) {
9            this.node = node;
10            this.cost = cost;
11            this.stop = stop;
12        }
13    }
14
15    class Pair {
16        int dest;
17        int cost;
18
19        Pair(int dest, int cost) {
20            this.dest = dest;
21            this.cost = cost;
22        }
23    }
24
25    public int findCheapestPrice(int n, int[][] flights, int src, int dest, int k) {
26
27        List<List<Pair>> adjList = new ArrayList<>();
28
29        int[] dist = new int[n];
30
31        Arrays.fill(dist, Integer.MAX_VALUE);
32        dist[src] = 0;
33
34        for (int i = 0; i < n; i++) {
35            adjList.add(new ArrayList<>());
36        }
37
38        for (int i = 0; i < flights.length; i++) {
39            int u = flights[i][0];
40            int v = flights[i][1];
41            int cost = flights[i][2];
42            adjList.get(u).add(new Pair(v, cost));
43        }
44
45        Queue<Tuple> q = new ArrayDeque<>();
46
47        q.offer(new Tuple(src, 0, -1));
48
49        while (q.size() > 0) {
50            Tuple cur = q.poll();
51            int u = cur.node;
52            int cost = cur.cost;
53            int stop = cur.stop;
54
55            for (Pair p : adjList.get(cur.node)) {
56                int v = p.dest;
57                int wt = p.cost;
58
59                if (dist[v] > cost + wt && stop + 1 <= k) {
60                    dist[v] = cost + wt;
61
62                    q.offer(new Tuple(v, dist[v], stop + 1));
63
64                }
65
66            }
67
68        }
69
70        return dist[dest] == Integer.MAX_VALUE ? -1 : dist[dest];
71
72    }
73}