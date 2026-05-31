1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4
5        vector<int> freq(10, 0);
6
7        while (n > 0) {
8            int r = n % 10;
9            freq[r]++;
10            n /= 10;
11        }
12
13        int ans = 0;
14        for (int i = 1; i < 10; i++) {
15            ans += (i * freq[i]);
16        }
17
18        return ans;
19    }
20};