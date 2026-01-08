1class Solution {
2public:
3    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {
4
5        const int n = tiles.size();
6
7        sort(tiles.begin(), tiles.end());
8        vector<int> prefix(n, 0);
9
10        for (int i = 0; i < n; i++) {
11            int len = tiles[i][1] - tiles[i][0] + 1;
12
13            prefix[i] = len + (i > 0 ? prefix[i - 1] : 0);
14        }
15
16        int ans = 0;
17        int j = 0;
18
19        for (int i = 0; i < n; i++) {
20
21            int start = tiles[i][0];
22            int end = start + carpetLen - 1;
23
24            while (j < n && tiles[j][1] <= end) {
25                j++;
26            }
27
28            int total = 0;
29               if (j > i) {
30                total = prefix[j - 1] - (i > 0 ? prefix[i - 1] : 0);
31            }
32
33
34            if (j < n && tiles[j][0] <= end) {
35                total += end - tiles[j][0] + 1;
36            }
37
38            ans = max(total, ans);
39        }
40
41        return ans;
42    }
43};