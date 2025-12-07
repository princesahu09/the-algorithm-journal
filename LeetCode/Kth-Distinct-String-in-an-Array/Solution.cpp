1class Solution {
2public:
3    string kthDistinct(vector<string>& arr, int k) {
4
5        unordered_map<string, int> freq;
6        string ans = "";
7        for (auto& i : arr) {
8            freq[i]++;
9        }
10
11        for (string& i : arr) {
12
13            if (freq[i] == 1) {
14                k--;
15                if (k == 0) {
16                    return i;
17                }
18            }
19        }
20
21        return ans;
22    }
23};