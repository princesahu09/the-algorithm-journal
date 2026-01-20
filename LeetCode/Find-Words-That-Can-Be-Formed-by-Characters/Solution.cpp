1class Solution {
2public:
3    bool check(string& str, vector<int> letter) {
4        for (char& i : str) {
5            letter[i - 'a']--;
6        }
7
8        for (int i = 0; i < 26; i++) {
9
10            if (letter[i] < 0) {
11                return false;
12            }
13        }
14
15        return true;
16    }
17    int countCharacters(vector<string>& words, string chars) {
18
19        vector<int> letter(26, 0);
20
21        int ans = 0;
22
23        for (char& i : chars) {
24            letter[i - 'a']++;
25        }
26
27        for (int i = 0; i < words.size(); i++) {
28            if (check(words[i], letter)) {
29                ans += words[i].size();
30            }
31        }
32
33        return ans;
34    }
35};