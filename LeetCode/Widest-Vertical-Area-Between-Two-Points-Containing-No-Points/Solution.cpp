1class Solution {
2public:
3    void print(vector<vector<int>>& arr) {
4
5        for (auto& i : arr) {
6            cout << i[0] << "---" << i[1];
7            cout << endl;
8        }
9    }
10    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
11
12        sort(points.begin(), points.end(), [](auto& a, auto& b) {
13            if (a[0] == b[0]) {
14                return a[1] < b[1];
15            }
16            return a[0] < b[0];
17        });
18
19        int ans = 0;
20        for (int i = 1; i < points.size(); i++) {
21            ans = max(ans, points[i][0] - points[i - 1][0]);
22        }
23
24        return ans;
25    }
26};