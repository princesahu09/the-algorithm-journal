1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4
5        stack<int> st;
6
7        for (int i = 0; i < tokens.size(); i++) {
8
9            string t = tokens[i];
10            if (t != "*" && t != "/" && t != "+" && t != "-") {
11
12                int temp = stoi(t);
13                st.push(temp);
14            } else {
15                int b = st.top();
16                st.pop();
17                int a = st.top();
18                st.pop();
19                int c = 0;
20                if (t == "*") {
21                    c = a * b;
22                }
23                if (t == "+") {
24                    c = a + b;
25                }
26                if (t == "/") {
27                    c = a / b;
28                }
29                if (t == "-") {
30
31                    c = a - b;
32                }
33                st.push(c);
34            }
35        }
36
37        return st.top();
38    }
39};