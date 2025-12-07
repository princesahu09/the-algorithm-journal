1class Solution {
2public:
3    int sumOddLengthSubarrays(vector<int>& arr) {
4
5        int ans = 0;
6        const int n = arr.size();
7        for (int i = 0; i < n; i++) {
8            for (int j = i + 1; j < n; j++) {
9
10                if ((j - i + 1) % 2 != 0) {
11                    ans += accumulate(arr.begin() + i, arr.begin() + j + 1, 0);
12                }
13            }
14        }
15        ans += accumulate(arr.begin(), arr.end(), 0);
16        return ans;
17    }
18};