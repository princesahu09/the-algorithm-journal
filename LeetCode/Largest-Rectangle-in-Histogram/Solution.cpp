1class Solution {
2public:
3    void print(vector<int>& rs) {
4        for (int i = 0; i < rs.size(); i++) {
5            cout << rs[i] << " ";
6        }
7    }
8    int largestRectangleArea(vector<int>& heights) {
9
10        stack<int> s;
11        const int n = heights.size();
12        vector<int> rs(n, 0);
13        vector<int> ls(n, 0);
14        for (int i = n - 1; i >= 0; i--) {
15
16            while (!s.empty() && heights[i] <= heights[s.top()]) {
17                s.pop();
18            }
19
20            rs[i] = s.size() == 0 ? n : s.top();
21            s.push(i);
22        }
23        s = stack<int>();
24        for (int i = 0; i < n; i++) {
25            while (!s.empty() && heights[i] <= heights[s.top()]) {
26                s.pop();
27            }
28            ls[i] = s.size() == 0 ? -1 : s.top();
29            s.push(i);
30        }
31
32        print(rs);
33        cout << endl;
34        print(ls);
35
36        int ans = 0;
37
38        for (int i = 0; i < n; i++) {
39            int w = rs[i] - ls[i] - 1;
40            int h = heights[i];
41
42            ans = max(ans, w * h);
43        }
44
45        return ans;
46    }
47};