1class Solution {
2    public int countDays(int days, int[][] meetings) {
3
4        Arrays.sort(meetings, (a, b) -> a[0] - b[0]);
5
6        List<int[]> res = new ArrayList<>();
7
8        res.add(meetings[0]);
9
10        for (int i = 1; i < meetings.length; i++) {
11
12            int s2 = meetings[i][0];
13            int e2 = meetings[i][1];
14
15            if (s2 <= res.get(res.size() - 1)[1]) {
16                res.get(res.size() - 1)[0] = Math.min(
17                        res.get(res.size() - 1)[0],
18                        meetings[i][0]);
19
20                res.get(res.size() - 1)[1] = Math.max(
21                        res.get(res.size() - 1)[1],
22                        meetings[i][1]);
23            } else {
24                res.add(meetings[i]);
25            }
26        }
27
28        int gap = 0;
29
30        for (int i = 1; i < res.size(); i++) {
31            gap += (res.get(i)[0] - res.get(i - 1)[1]) - 1;
32        }
33
34        gap += (res.get(0)[0] - 1);
35
36        gap += days - res.get(res.size() - 1)[1];
37        return gap;
38
39    }
40}