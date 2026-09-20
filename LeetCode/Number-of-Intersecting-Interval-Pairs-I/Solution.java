1class Solution {
2
3    public int countIntersectingIntervals(int[][] intervals) {
4
5        Arrays.sort(intervals, (a, b) -> {
6            return Integer.compare(a[0], b[0]);
7        });
8        int ans = 0;
9
10        for (int i = 0; i < intervals.length; i++) {
11
12            int e1 = intervals[i][1];
13
14            for (int j = i + 1; j < intervals.length; j++) {
15                int s2 = intervals[j][0];
16
17                if (s2 <= e1) {
18                    ans++;
19                }
20
21            }
22
23        }
24
25        return ans;
26
27    }
28}