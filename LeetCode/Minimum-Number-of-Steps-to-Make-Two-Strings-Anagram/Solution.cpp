1class Solution {
2public:
3    int minSteps(string s, string t) {
4
5        vector<int> letter1(26, 0);
6        vector<int> letter2(26, 0);
7        for (auto& i : s) {
8
9            letter1[i - 'a']++;
10        }
11        for (auto& i : t) {
12
13            letter2[i - 'a']++;
14        }
15        int ans = 0;
16
17        for (int i = 0; i < 26; i++) {
18            if (letter1[i] == letter2[i])
19                continue;
20            if (letter1[i] > letter2[i])
21
22                ans += (letter1[i] - letter2[i]);
23        }
24        return ans;
25    }
26};