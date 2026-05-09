1class Solution {
2public:
3    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
4
5        int m = grid.size();
6        int n = grid[0].size();
7
8        int srow = 0;
9        int erow = m - 1;
10        int scol = 0;
11        int ecol = n - 1;
12        vector<vector<int>> arr;
13        arr.push_back({});
14        int point = 0;
15
16        while (srow <= erow && scol <= ecol) {
17
18            for (int j = scol; j <= ecol; j++) {
19                arr[point].push_back(grid[srow][j]);
20            }
21
22            for (int i = srow + 1; i <= erow; i++) {
23                arr[point].push_back(grid[i][ecol]);
24            }
25            for (int j = ecol - 1; j >= scol; j--) {
26                if (srow == erow)
27                    break;
28                arr[point].push_back(grid[erow][j]);
29            }
30
31            for (int i = erow - 1; i >= srow + 1; i--) {
32                if (scol == ecol)
33                    break;
34                arr[point].push_back(grid[i][scol]);
35            }
36            arr.push_back({});
37
38            srow++;
39            erow--;
40            scol++;
41            ecol--;
42            point++;
43        }
44
45        srow = 0;
46        erow = m - 1;
47        scol = 0;
48        ecol = n - 1;
49        int idx = 0;
50        while (srow <= erow && scol <= ecol) {
51            int len = arr[idx].size();
52            int counter = k % len;
53            arr[idx].insert(arr[idx].end(), arr[idx].begin(), arr[idx].end());
54
55            for (int j = scol; j <= ecol; j++) {
56                grid[srow][j] = arr[idx][counter++];
57            }
58
59            for (int i = srow + 1; i <= erow; i++) {
60                grid[i][ecol] = arr[idx][counter++];
61            }
62            for (int j = ecol - 1; j >= scol; j--) {
63                if (srow == erow)
64                    break;
65                grid[erow][j] = arr[idx][counter++];
66            }
67
68            for (int i = erow - 1; i >= srow + 1; i--) {
69                if (scol == ecol)
70                    break;
71                grid[i][scol] = arr[idx][counter++];
72            }
73
74            srow++;
75            erow--;
76            scol++;
77            ecol--;
78            idx++;
79        }
80
81        return grid;
82    }
83};