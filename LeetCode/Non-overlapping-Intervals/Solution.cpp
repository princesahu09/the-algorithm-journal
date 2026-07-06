1class Solution {
2public:
3    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
4
5        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
6            if (a[0] == b[0]) {
7                return a[1] < b[1];
8            }
9            return a[0] > b[0];
10        });
11
12        vector<vector<int>> temp;
13        int ans = 0;
14
15        temp.push_back(intervals[0]);
16
17        for (int i = 1; i < intervals.size(); i++) {
18
19            int s2 = intervals[i][0];
20            int e2 = intervals[i][1];
21
22            int s1 = temp[temp.size() - 1][0];
23            int e1 = temp[temp.size() - 1][1];
24
25            if (s2 < e1 && s1 < e2) {
26                ans++;
27                // temp.back()[1]=min(e1,e2);
28
29            }
30
31            else {
32                temp.push_back({s2, e2});
33            }
34        }
35
36        return ans;
37    }
38};