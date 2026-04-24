1class Solution {
2public:
3    string removeDuplicateLetters(string s) {
4
5        stack<char> st;
6        int seen = 0;
7        vector<int> freq(26, 0);
8        for (auto& i : s) {
9            freq[i - 'a']++;
10        }
11
12        for (int i = 0; i < s.size(); i++) {
13
14            freq[s[i] - 'a']--;
15            if (seen & (1 << (s[i] - 'a'))) {
16                continue;
17            }
18            while (!st.empty() && st.top() > s[i] && freq[st.top() - 'a'] > 0) {
19                int a = (st.top() - 'a');
20                st.pop();
21                seen &= ~(1 << (a));
22            }
23
24            st.push(s[i]);
25            seen |= (1 << s[i] - 'a');
26        }
27        string ans = "";
28
29        while (!st.empty()) {
30            ans = st.top() + ans;
31            st.pop();
32        }
33
34        return ans;
35    }
36};