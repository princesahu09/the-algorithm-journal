1class Solution {
2public:
3    string builder(stack<pair<char, int>>& st) {
4        string ans = "";
5        while (!st.empty()) {
6            char ch = st.top().first;
7            int freq = st.top().second;
8            ans = string(freq, ch) + ans;
9            st.pop();
10        }
11        return ans;
12    }
13    string removeDuplicates(string s, int k) {
14
15        stack<pair<char, int>> st;
16        int n = s.size();
17        int i = 0;
18
19        while (i < n) {
20            if (!st.empty()) {
21                char ch = st.top().first;
22                int freq = st.top().second;
23                if (ch == s[i]) {
24                    st.pop();
25                    freq++;
26                    if (freq != k) {
27                        st.push({ch, freq});
28                    }
29                }
30                else
31                {
32                    st.push({s[i],1});
33                }
34            } 
35            
36            else {
37                st.push({s[i], 1});
38            }
39
40            i++;
41        }
42
43        return builder(st);
44    }
45};