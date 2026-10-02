1class Solution {
2    public int findChampion(int n, int[][] edges) {
3
4        int[] indegree = new int[n];
5
6        for (int i = 0; i < edges.length; i++) {
7            int u = edges[i][0];
8            int v = edges[i][1];
9
10            indegree[v]++;
11        }
12        int ans = -1;
13
14        for (int i = 0; i < n; i++) {
15            if (indegree[i] == 0) {
16                if (ans != -1) {
17                    return -1;
18                }
19                ans = i;
20            }
21        }
22
23        return ans;
24
25    }
26
27}