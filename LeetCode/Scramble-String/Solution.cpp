1class Solution {
2public:
3unordered_map<string,bool>mp;
4    bool solve(string a, string b) {
5
6        if (a == b)
7            return true;
8
9        if (a.size() <= 1) {
10
11            return false;
12        }
13
14        string key=a+" "+b;
15        if(mp.find(key)!=mp.end())
16        {
17
18            return mp[key];
19        }
20        int n = a.size();
21
22        bool flag = false;
23
24        for (int i = 1; i <= n - 1; i++) {
25
26            bool c = solve(a.substr(0, i), b.substr(n - i, i)) &&
27                     solve(a.substr(i, n - i), b.substr(0, n - i));
28
29            bool d = solve(a.substr(0, i), b.substr(0, i)) &&
30                     solve(a.substr(i, n - i), b.substr(i, n - i));
31
32            if (c || d) {
33                flag = true;
34                break;
35            }
36        }
37
38        return mp[key]=flag;
39    }
40
41    bool isScramble(string s1, string s2) {
42
43        if (s1 == s2)
44            return true;
45
46            mp.clear();
47
48        return solve(s1, s2);
49    }
50};