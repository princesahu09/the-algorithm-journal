1class Solution {
2public:
3    int removeCoveredIntervals(vector<vector<int>>& intervals) {
4
5        int ans = 0;
6
7        for (int i = 0; i < intervals.size(); i++) {
8
9            int c = intervals[i][0];
10            int d = intervals[i][1];
11
12            bool flag = false;
13            for (int j = 0; j < intervals.size(); j++) {
14
15                int a = intervals[j][0];
16                int b = intervals[j][1];
17
18                if (i != j && a <= c && b >= d) {
19                    flag = true;
20                    break;
21                }
22            }
23
24            if (!flag) {
25                ans++;
26            }
27        }
28
29        return ans;
30    }
31};