1class Solution {
2public:
3    void big(string  &str) {
4        for (int i = 0; i < str.size(); i++) {
5            str[i] = str[i] | ' ';
6        }
7
8         
9    }
10    string capitalizeTitle(string title) {
11
12        string ans = "";
13
14        stringstream ss(title);
15        string word;
16
17        while (ss >> word) {
18
19            big(word);
20            if (word.size() > 2) {
21
22                word[0] &= '_';
23                ans += word;
24
25            } else {
26
27                ans += word;
28            }
29            ans += ' ';
30        }
31        ans.pop_back();
32        return ans;
33    }
34};