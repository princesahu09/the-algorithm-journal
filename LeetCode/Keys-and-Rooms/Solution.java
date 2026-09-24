1class Solution {
2
3    void solve(int node, List<List<Integer>> adjList, boolean[] visited) {
4
5        visited[node] = true;
6
7        for (int i : adjList.get(node)) {
8            if (!visited[i])
9
10            {
11                solve(i, adjList, visited);
12            }
13
14        }
15
16    }
17
18    public boolean canVisitAllRooms(List<List<Integer>> rooms) {
19
20        int n = rooms.size();
21        boolean[] visited = new boolean[n];
22
23        solve(0, rooms, visited);
24
25        for (boolean i : visited) {
26            if (!i)
27                return false;
28        }
29        return true;
30
31    }
32}