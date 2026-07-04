1class Solution {
2public:
3    int removeCoveredIntervals(vector<vector<int>>& intervals) {
4
5        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
6            if (a[0] == b[0]) {
7                return a[1] > b[1];
8            }
9            return a[0] < b[0];
10        });
11
12        int maxEnd = intervals[0][1];
13
14        int ans = 1;
15
16        for (int i = 1; i < intervals.size(); i++) {
17
18            if (intervals[i][1] > maxEnd) {
19                ans++;
20                maxEnd = max(maxEnd, intervals[i][1]);
21            }
22        }
23
24        return ans;
25    }
26};