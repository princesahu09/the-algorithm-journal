1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4
5        vector<int> freq(26, INT_MAX);
6        vector<string> ans;
7
8        for (int i = 0; i < words.size(); i++) {
9
10            vector<int> letter(26, 0);
11            for (int j = 0; j < words[i].size(); j++) {
12                letter[words[i][j] - 'a']++;
13            }
14
15            for (int k = 0; k < 26; k++) {
16                freq[k] = min(freq[k], letter[k]);
17            }
18        }
19
20        for (int i = 0; i < 26; i++) {
21
22            int start = 0;
23            while (start < freq[i]) {
24                ans.push_back(string(1, (i + 'a')));
25                start++;
26            }
27        }
28
29        return ans;
30    }
31};