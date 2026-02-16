1class Solution {
2public:
3    double cal(double a, double b, double c) { double s = (a + b + c) / 2;
4    double area=s*(s-a)*(s-b)*(s-c);
5    return sqrt(area); 
6    }
7    double distance(int x1, int y1, int x2, int y2) {
8        int d = pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2) ;return sqrt(d);
9    }
10    double largestTriangleArea(vector<vector<int>>& points) {
11
12        double ans=INT_MIN;
13
14        const int n = points.size();
15        for (int i = 0; i < n; i++) {
16            int x1 = points[i][0];
17            int y1 = points[i][1];
18            for (int j = 0; j < n; j++) {
19                int x2 = points[j][0];
20                int y2 = points[j][1];
21                if (i != j) {
22                    for (int k = 0; k < n; k++) {
23                        int x3 = points[k][0];
24                        int y3 = points[k][1];
25                        if (k != j && k != i) {
26                            double a = distance(x1, y1, x2, y2);
27                            double b = distance(x2, y2, x3, y3);
28                            double c = distance(x3, y3, x1, y1);
29                            double area = cal(a, b, c);
30                            ans = max(ans, area);
31                        }
32                    }
33                }
34            }
35        }
36
37        return ans;
38    }
39};