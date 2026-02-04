1class Solution {
2public:
3    bool isSubstringPresent(string s) {
4
5        unordered_set<string> seen;
6
7        for (int i = 1; i < s.size(); i++) {
8            string temp = to_string(s[i - 1]);
9            temp += s[i];
10            seen.insert(temp);
11        }
12        reverse(s.begin(), s.end());
13        for (int i = 1; i < s.size(); i++) {
14            string temp = to_string(s[i - 1]);
15            temp += s[i];
16            if (seen.count(temp)) {
17                return true;
18            }
19        }
20
21        return false;
22    }
23};