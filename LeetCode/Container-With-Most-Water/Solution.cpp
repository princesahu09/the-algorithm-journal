1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4
5        int ans = INT_MIN;
6        const int n = height.size();
7        int i = 0;
8        int j = n - 1;
9
10        while (i <= j) {
11            int w = abs(j - i);
12            int h = min(height[i], height[j]);
13            ans = max(ans, w * h);
14            if (height[i] > height[j]) {
15                j--;
16            } else {
17                i++;
18            }
19        }
20
21        return ans;
22    }
23};