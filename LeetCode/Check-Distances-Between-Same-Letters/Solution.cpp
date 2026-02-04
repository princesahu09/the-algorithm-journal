1class Solution {
2public:
3    bool checkDistances(string s, vector<int>& distance) {
4
5        vector<pair<int, int>> letter(26, {-1, -1});
6
7        for (int i = 0; i < s.size(); i++) {
8            int ch = s[i] - 'a';
9
10            if (letter[ch].first == -1) {
11                letter[ch].first = i;
12            } else {
13                letter[ch].second = i;
14            }
15        }
16
17        for (int i = 0; i < 26; i++) {
18
19            if (letter[i].first != -1) {
20                int a = letter[i].first;
21                int b = letter[i].second;
22
23                if (b - a - 1 != distance[i]) {
24                    return false;
25                }
26            }
27        }
28
29        return true;
30    }
31};