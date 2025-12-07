1class Solution {
2public:
3    int maxDifference(string s) {
4
5        vector<int> freq(26,0);
6
7        for (char& i : s) {
8            freq[i - 'a']++;
9        }
10        int even = INT_MAX;
11        int odd = INT_MIN;
12
13        for (int i = 0; i < 26; i++) {
14            if (freq[i] != 0)
15
16            {
17                if (freq[i] % 2 == 0) {
18                    even = min(even, freq[i]);
19                } else {
20                    odd = max(odd, freq[i]);
21                }
22            }
23        }
24
25        return  ( odd-even);
26    }
27};