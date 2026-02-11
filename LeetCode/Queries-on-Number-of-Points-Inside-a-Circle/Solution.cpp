1class Solution {
2public:
3    vector<int> countPoints(vector<vector<int>>& points,
4                            vector<vector<int>>& queries) {
5
6        vector<int> ans;
7
8        for (int i = 0; i < queries.size(); i++) {
9            int x = queries[i][0];
10            int y = queries[i][1];
11            int r = queries[i][2];
12            int counter = 0;
13            for (int j = 0; j < points.size(); j++) {
14                int h = points[j][0] - x;
15                int k = points[j][1] - y;
16                h = h * h;
17                k = k * k;
18                if (h + k <= r * r) {
19                    counter++;
20                }
21            }
22            ans.push_back(counter);
23        }
24        return ans;
25    }
26};