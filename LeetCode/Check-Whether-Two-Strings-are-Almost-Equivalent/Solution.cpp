1class Solution {
2public:
3    bool checkAlmostEquivalent(string word1, string word2) {
4
5        vector<int> letter1(26, 0);
6        vector<int> letter2(26, 0);
7
8        for (auto& i : word1) {
9            letter1[i - 'a']++;
10        }
11        for (auto& i : word2) {
12            letter2[i - 'a']++;
13        }
14
15        for (int i = 0; i < 26; i++) {
16            int diff = abs(letter1[i] - letter2[i]);
17            if (diff >3) {
18                return false;
19            }
20        }
21
22        return true;
23    }
24};