1class Solution {
2public:
3    bool isValid(string s) {
4
5        string st;
6
7        for (char &c : s) {
8            st.push_back(c);
9
10            if (st.size() >= 3 &&
11                st[st.size() - 3] == 'a' &&
12                st[st.size() - 2] == 'b' &&
13                st[st.size() - 1] == 'c') {
14
15                st.pop_back();
16                st.pop_back();
17                st.pop_back();
18            }
19        }
20
21        return st.empty();
22    }
23};
24