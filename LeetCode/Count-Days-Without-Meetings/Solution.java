1class Solution {
2    public int countDays(int days, int[][] meetings) {
3        Arrays.sort(meetings, (a, b) -> a[0] - b[0]);
4
5        int gap = 0;
6        int maxLen = meetings[0][1];
7
8        for (int i = 1; i < meetings.length; i++) {
9            if (meetings[i][0] > maxLen) {
10                gap += meetings[i][0] - maxLen - 1;
11
12            }
13
14            maxLen = Math.max(maxLen, meetings[i][1]);
15        }
16
17        gap += meetings[0][0] - 1;
18        gap += days - maxLen;
19        return gap;
20
21    }
22}