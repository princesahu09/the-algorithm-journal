1class Solution {
2public:
3    int minOperations(vector<string>& logs) {
4
5        stack<string> st;
6
7        for (auto& i : logs) {
8            if (i == "./") {
9                continue;
10            } else if (i == "../") {
11                if (!st.empty()) {
12                    st.pop();
13                }
14            } else {
15                st.push(i);
16            }
17        }
18        return st.size();
19    }
20};