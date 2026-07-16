1class Solution {
2public:
3    int maxJump(vector<int>& stones) {
4        const int n = stones.size();
5
6        int ans = 0;
7
8        ans = stones[1] - stones[0];
9        for (int i = 2; i < n; i++) {
10            ans = max(ans, stones[i] - stones[i - 2]);
11        }
12        return ans;
13    }
14};