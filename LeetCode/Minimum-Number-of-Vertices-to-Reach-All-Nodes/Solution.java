1class Solution {
2    public List<Integer> findSmallestSetOfVertices(int n, List<List<Integer>> edges) {
3
4        int[] indegree = new int[n];
5
6        for (int i = 0; i < edges.size(); i++) {
7            int v = edges.get(i).get(1);
8            indegree[v]++;
9        }
10        List<Integer> ans = new ArrayList<>();
11
12        for (int i = 0; i < n; i++) {
13            if (indegree[i] == 0) {
14                ans.add(i);
15            }
16        }
17        return ans;
18
19    }
20}