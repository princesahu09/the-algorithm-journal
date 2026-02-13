1class Solution {
2public:
3    int dfs(vector<int>& freq) {
4        int total = 0;
5        for (int i = 0; i < 26; i++) {
6
7            if (freq[i] > 0) {
8                total++;
9                freq[i]--;
10                total += dfs(freq);
11                freq[i]++;
12            }
13        }
14        return total;
15    }
16    int numTilePossibilities(string tiles) {
17
18        vector<int> letter(26, 0);
19
20        for (auto& i : tiles) {
21            letter[i - 'A']++;
22        }
23       
24        return dfs(letter);
25    }
26};