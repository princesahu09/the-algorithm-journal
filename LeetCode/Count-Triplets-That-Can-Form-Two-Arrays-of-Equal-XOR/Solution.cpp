1class Solution {
2public:
3    int countTriplets(vector<int>& arr) {
4        const int n = arr.size();
5
6        int ans = 0;
7
8        for (int i = 0; i < n; i++) {
9            int x = 0;
10            for (int k = i; k < n; k++) {
11                x ^= arr[k];
12
13                if (x == 0 && k - i > 0) {
14                    ans += (k - i);
15                }
16            }
17        }
18        return ans;
19    }
20};