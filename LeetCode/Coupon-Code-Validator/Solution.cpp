1class Solution {
2public:
3    bool check(string str) {
4
5        for (char& i : str) {
6
7            if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') ||
8                (i >= '0' && i <= '9') || i == '_') {
9                continue;
10            } else {
11                return false;
12            }
13        }
14        return true;
15    }
16    vector<string> validateCoupons(vector<string>& code,
17                                   vector<string>& businessLine,
18                                   vector<bool>& isActive) {
19
20        vector<string> ans;
21        unordered_map<string, int> busy = {
22
23            {"electronics", 1},
24            {"grocery", 2},
25            {"pharmacy", 3},
26            {"restaurant", 4}};
27
28        vector<pair<int, string>> valid;
29
30        for (int i = 0; i < code.size(); i++) {
31            if (!isActive[i])
32                continue;
33                else if(code[i].empty())continue;
34            else if (!busy.count(businessLine[i]))
35                continue;
36            else if (check(code[i])){
37                
38            
39                valid.push_back({busy[businessLine[i]], code[i]});
40            }
41        }
42
43        sort(valid.begin(), valid.end(), [](auto &a, auto  &b) {
44            if (a.first != b.first)
45                return a.first < b.first;
46            return a.second < b.second;
47        });
48        for (auto  &i : valid) {
49            ans.push_back(i.second);
50        }
51
52        return ans;
53    }
54};