1class Solution {
2public:
3    vector<string> findOcurrences(string text, string first, string second) {
4
5        vector<string> ans;
6
7        stringstream ss(text);
8        string word;
9        bool a = false;
10        bool b = false;
11        while (ss >> word) {
12            if (b) {
13                ans.push_back(word);
14            }
15
16            if (a && word == second) {
17                b = true;
18            } else {
19                b = false;
20            }
21
22            if (word == first) {
23                a = true;
24
25            } else {
26                a = false;
27            }
28        }
29        return ans;
30    }
31};