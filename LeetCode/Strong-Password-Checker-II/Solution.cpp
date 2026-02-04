1class Solution {
2public:
3    bool checkLen(string& str) { return str.size() >= 8; }
4
5    bool check(string& s) {
6        bool lower = false;
7        bool upper = false;
8        bool digit = false;
9        bool star = false;
10        string str = "!@#$%^&*()-+";
11        unordered_set<char> special;
12        for (auto& i : str) {
13            special.insert(i);
14        }
15        for (int i = 0; i  < s.size(); i++) {
16            if (special.count(s[i]))
17                star = true;
18
19            if (s[i] >= '0' && s[i] <= '9')
20                digit = true;
21            if (s[i] >= 'a' && s[i] <= 'z')
22                lower = true;
23            if (s[i] >= 'A' && s[i] <= 'Z')
24                upper = true;
25            if (i>0&&s[i] == s[i-1]) {
26                return false;
27            }
28        }
29
30        return lower && upper && digit && star;
31    }
32    bool strongPasswordCheckerII(string password) {
33
34        return checkLen(password)&&check(password);
35    }
36};