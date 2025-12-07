1class Solution {
2public:
3    bool check(string str) {
4        const int n = str.size();
5        set<char> vowels = {'a', 'e', 'u', 'i', 'o'};
6        if (vowels.count(str[0]) && vowels.count(str[n - 1]))
7            
8        {
9            return true;
10        }
11
12        return false;
13    }
14    int vowelStrings(vector<string>& words, int left, int right) {
15
16        int ans = 0;
17        for (int i = left; i <= right; i++) {
18            string str = words[i];
19            if (check(str)) {
20                ans++;
21            }
22        }
23
24        return ans;
25    }
26};