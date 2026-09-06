1class Solution {
2    public long maxSum(int[][] grid, int[] limits, int k) {
3
4        PriorityQueue<Integer> pq = new PriorityQueue<>((a,b)->b-a);
5
6        for (int i = 0; i < grid.length; i++) {
7            Arrays.sort(grid[i]);
8
9            int start = 0;
10            int end = grid[0].length - 1;
11            while (start < end) {
12                int temp = grid[i][start];
13                grid[i][start] = grid[i][end];
14                grid[i][end] = temp;
15                start++;
16                end--;
17            }
18
19        }
20        long ans = 0;
21
22        for (int i = 0; i < grid.length; i++) {
23            int l = limits[i];
24            for (int j = 0; j < grid[0].length && l > 0; j++, l--) {
25                pq.offer(grid[i][j]);
26            }
27        }
28
29        while (!pq.isEmpty() && k > 0) {
30            ans += pq.poll();
31            k--;
32        }
33
34        return ans;
35
36    }
37}