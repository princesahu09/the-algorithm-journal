1class Solution {
2    public int nearestDrone(int[][] drones, int[] target) {
3
4        int ans = Integer.MAX_VALUE;
5        int high = Integer.MAX_VALUE;
6
7        for (int i = 0; i < drones.length; i++) {
8
9            int x = drones[i][0];
10            int y = drones[i][1];
11            int r = drones[i][2];
12
13            int dist = Math.abs(x - target[0]) + Math.abs(y - target[1]);
14
15            if (r >= dist) {
16                if (high == dist) {
17                    ans = Math.min(ans, i);
18                }
19
20                else if (high > dist) {
21                    ans = i;
22                    high = dist;
23                }
24
25            }
26        }
27
28        return ans==Integer.MAX_VALUE?-1:ans;
29
30    }
31}