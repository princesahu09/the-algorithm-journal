1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4
5        vector<int> ans;
6
7        vector<int> pf(26, 0);
8        vector<int> rf(26, 0);
9        for (auto& i : p) {
10            pf[i - 'a']++;
11        }
12
13        int k = p.size();
14        int n = s.size();
15
16        int start = 0;
17        int end = 0;
18
19        while (end < n) {
20
21            rf[s[end] - 'a']++;
22
23            if (end - start + 1 < k) {
24                end++;
25            }
26
27            else if (end - start + 1 == k) {
28
29                if (rf == pf) {
30                    ans.push_back(start);
31                }
32
33                rf[s[start] - 'a']--;
34                start++;
35                end++;
36            }
37        }
38
39        return ans;
40    }
41};