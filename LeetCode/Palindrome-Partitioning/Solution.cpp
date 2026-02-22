1class Solution {
2public:
3    bool palin(string& str) {
4        string temp = str;
5        reverse(temp.begin(), temp.end());
6        if (str == temp) {
7            return true;
8        } else {
9            return false;
10        }
11    }
12
13    void solve(string s, vector<string> part, vector<vector<string>>& ans) {
14
15        if (s.size()==0) {
16            ans.push_back(part);
17            return ;
18        }
19        for (int i = 0; i < s.size(); i++) {
20            string left = s.substr(0, i + 1);
21          
22
23            if (palin(left)) {
24                part.push_back(left);
25                solve(s.substr(i+1), part, ans);
26                part.pop_back();
27            }
28          
29        }
30    }
31
32    vector<vector<string>> partition(string s) {
33
34        vector<vector<string>> ans;
35        vector<string>part;
36        solve(s,part,ans);
37        return ans;
38    }
39};