1class Solution {
2    String converter(int n) {
3        if (n == 0) {
4            return "0";
5        }
6        StringBuilder str = new StringBuilder("");
7
8        while (n > 0) {
9            int r = n % 2;
10            str.append(r);
11            n /= 2;
12
13        }
14
15        return str.reverse().toString();
16    }
17
18    public boolean queryString(String s, int n) {
19
20        for (int i = 1; i <= n; i++) {
21
22            String target = converter(i);
23
24            if (!s.contains(target)) {
25                return false;
26            }
27        }
28
29        return true;
30
31    }
32}