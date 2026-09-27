1class Solution {
2    Stack<Character> stackReverse(Stack<Character> st) {
3        Stack<Character> ans = new Stack<>();
4
5        while (!st.isEmpty()) {
6            ans.push(st.peek());
7            st.pop();
8        }
9
10        return ans;
11    }
12
13    String generate(Stack<Character> st) {
14        StringBuilder str = new StringBuilder("");
15        while (!st.isEmpty()) {
16            str.append(st.peek());
17            st.pop();
18        }
19
20        str.reverse();
21        return str.toString();
22    }
23
24    public String reverseParentheses(String s) {
25
26        Stack<Character> master = new Stack<>();
27
28        for (int i = 0; i < s.length(); i++) {
29            char ch = s.charAt(i);
30
31            if (ch == ')') {
32                Stack<Character> slave = new Stack<>();
33                while (!master.isEmpty() && master.peek() != '(') {
34                    slave.push(master.peek());
35                    master.pop();
36                }
37                if (master.peek() == '(') {
38                    master.pop();
39                }
40                slave = stackReverse(slave);
41
42                while (!slave.isEmpty()) {
43                    master.push(slave.peek());
44                    slave.pop();
45                }
46            } else {
47                master.push(ch);
48            }
49        }
50
51        return generate(master);
52
53    }
54}