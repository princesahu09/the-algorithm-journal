1class Solution {
2public:
3    bool canArrange(vector<int>& arr, int k) {
4
5        unordered_map<int, int> freq;
6
7        for (auto& i : arr) {
8
9            if (i < 0) {
10                freq[((i % k) + k) % k]++;
11            } else {
12                freq[i % k]++;
13            }
14        }
15        if (freq[0] % 2 != 0)
16            return false;
17        if (k % 2 == 0 && freq[k / 2] % 2 != 0)
18            return false;
19
20        for (int i = 1; i <= k - 1; i++) {
21            if (freq[i] != freq[k - i])
22                return false;
23        }
24
25        return true;
26    }
27};