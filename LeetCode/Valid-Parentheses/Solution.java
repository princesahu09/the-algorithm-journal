1class Solution {
2    public boolean isValid(String s) {
3        Stack<Character> st = new Stack<>();
4
5        for (char ch : s.toCharArray()) {
6            if (ch == ')' || ch == '}' || ch == ']') {
7                if (!st.isEmpty()) {
8                    if (st.peek() == '(' && ch == ')') {
9                        st.pop();
10                    } else if (st.peek() == '{' && ch == '}') {
11                        st.pop();
12                    } else if (st.peek() == '[' && ch == ']') {
13                        st.pop();
14                    } else {
15                        return false;
16
17                    }
18                } else {
19                    return false;
20                }
21            } else {
22                st.push(ch);
23            }
24
25        }
26
27        return st.size() == 0;
28
29    }
30}