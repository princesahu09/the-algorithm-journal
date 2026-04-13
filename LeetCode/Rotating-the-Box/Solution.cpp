1class Solution {
2public:
3    int obstacle(vector<char>& arr, int start, int end) {
4
5        for (int i = start; i < end; i++) {
6            if (arr[i] == '*') {
7                return i;
8            }
9        }
10        return end;
11    }
12
13    void stoneAdjust(vector<vector<char>>& boxGrid)
14
15    {
16        const int n = boxGrid.size();
17        const int m = boxGrid[0].size();
18        for (int i = 0; i < n; i++) {
19
20            int start = 0;
21            while (start < m) {
22                int end = obstacle(boxGrid[i], start, m) - 1;
23                int left = start;
24                int right = end;
25                while (left <= right) {
26                    if (left <= right && boxGrid[i][left] == '#' &&
27                        boxGrid[i][right] == '.') {
28                        swap(boxGrid[i][left], boxGrid[i][right]);
29                        left++;
30                        right--;
31                    }
32                    while (left <= right && boxGrid[i][left] == '.') {
33                        left++;
34                    }
35                    while (left <= right && boxGrid[i][right] == '#') {
36                        right--;
37                    }
38                }
39                start = end + 2;
40            }
41        }
42    }
43
44    vector<vector<char>> transform(vector<vector<char>>& boxGrid) {
45
46        int m = boxGrid.size();
47        int n = boxGrid[0].size();
48
49        vector<vector<char>> ans(n, vector<char>(m, '0'));
50
51        for (int i = 0; i < m; i++) {
52            for (int j = 0; j < n; j++) {
53
54                ans[j][m - i - 1] = boxGrid[i][j];
55            }
56        }
57
58        return ans;
59    }
60    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
61
62        stoneAdjust(boxGrid);
63        return transform(boxGrid);
64    }
65};