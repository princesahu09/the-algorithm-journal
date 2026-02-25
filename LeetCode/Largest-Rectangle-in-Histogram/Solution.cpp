1class Solution {
2public:
3  
4    int largestRectangleArea(vector<int>& heights) {
5
6        stack<int> s;
7        const int n = heights.size();
8        vector<int> rs(n, 0);
9        vector<int> ls(n, 0);
10        for (int i = n - 1; i >= 0; i--) {
11
12            while (!s.empty() && heights[i] <= heights[s.top()]) {
13                s.pop();
14            }
15
16            rs[i] = s.size() == 0 ? n : s.top();
17            s.push(i);
18        }
19        s = stack<int>();
20        for (int i = 0; i < n; i++) {
21            while (!s.empty() && heights[i] <= heights[s.top()]) {
22                s.pop();
23            }
24            ls[i] = s.size() == 0 ? -1 : s.top();
25            s.push(i);
26        }
27
28     
29
30        int ans = 0;
31
32        for (int i = 0; i < n; i++) {
33            int w = rs[i] - ls[i] - 1;
34            int h = heights[i];
35
36            ans = max(ans, w * h);
37        }
38
39        return ans;
40    }
41};