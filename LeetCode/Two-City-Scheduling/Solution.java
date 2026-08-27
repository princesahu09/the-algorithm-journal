1class Solution {
2    public int twoCitySchedCost(int[][] costs) {
3
4        Arrays.sort(costs, (a, b) -> (a[0] - a[1]) - (b[0] - b[1]));
5
6        int ans = 0;
7        int n = costs.length;
8
9        int counter = 0;
10        while (counter < n) {
11
12            if (counter < n / 2) {
13                ans += costs[counter][0];
14            } else {
15                ans += costs[counter][1];
16            }
17            counter++;
18
19        }
20        return ans;
21
22    }
23}