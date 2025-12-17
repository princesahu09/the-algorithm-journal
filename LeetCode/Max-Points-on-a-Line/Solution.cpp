1class Solution {
2public:
3    int maxPoints(vector<vector<int>>& points) {
4
5        int ans = 0;
6        const int n = points.size();
7
8        for (int i = 0; i < n; i++) {
9            int x1 = points[i][0];
10            int y1 = points[i][1];
11            int result=0;
12
13            map<pair<int, int>, int> slope;
14            int d = 0;
15            for (int j = i+1; j < n; j++) {
16                int x2 = points[j][0];
17                int y2 = points[j][1];
18                int dx = x2 - x1;
19                int dy = y2 - y1;
20
21                if (dx == 0 && dy == 0) {
22                    d++;
23                    continue;
24                } else if (dx == 0) {
25                    slope[{1, 0}]++;
26                } else if (dy == 0) {
27                    slope[{0, 1}]++;
28                }
29
30                else
31
32                {
33                    int g = gcd(abs(dx), abs(dy));
34
35                    
36                    dx /= g;
37                    dy /= g;
38                    if(dx<0)
39                    {
40                        dx=-dx;
41                        dy=-dy;
42                    }
43                    slope[{dx, dy}]++;
44                }
45            }
46            for (auto& i : slope) {
47
48                if (i.second > result) {
49                    result = i.second;
50                }
51            }
52            result+=d+1;
53            ans=max(ans,result);
54            
55        }
56
57        return ans;
58    }
59};