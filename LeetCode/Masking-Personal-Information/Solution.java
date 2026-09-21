1class Solution {
2
3    String separator(String s) {
4        StringBuilder str = new StringBuilder("");
5
6        for (Character i : s.toCharArray()) {
7            if (i >= '0' && i <= '9') {
8                str.append(i);
9            }
10        }
11
12        return str.toString();
13    }
14
15    String repeater(int counter, char c) {
16        StringBuilder str = new StringBuilder("");
17        while (counter-- > 0) {
18            str.append(c);
19        }
20
21        return str.toString();
22
23    }
24
25    String phone(String s) {
26
27        StringBuilder str = new StringBuilder("");
28
29        s = separator(s);
30        int counter = s.length() - 10;
31
32        if (counter > 0) {
33            str.append('+');
34            str.append(repeater(counter, '*'));
35            str.append('-');
36        }
37
38        str.append("***-***-");
39        StringBuilder last = new StringBuilder("");
40        int four = 0;
41        for (int i = s.length() - 1; i >= 0 && four < 4; i--) {
42            last.append(s.charAt(i));
43            four++;
44        }
45        last.reverse();
46        str.append(last);
47
48        return str.toString();
49    }
50
51    String email(String s) {
52
53        s = s.toLowerCase();
54
55        StringBuilder start = new StringBuilder("");
56        StringBuilder end = new StringBuilder("");
57        int i = s.length() - 1;
58
59        for (; i >= 0; i--) {
60
61            end.append(s.charAt(i));
62
63            if (s.charAt(i) == '@') {
64                break;
65            }
66
67        }
68        end.reverse();
69        i--;
70
71        char first = s.charAt(0);
72        char second = s.charAt(i);
73        start.append(first);
74        start.append("*****");
75        start.append(second);
76
77        start.append(end);
78
79        return start.toString();
80
81    }
82
83    public String maskPII(String s) {
84        if (s.equals(""))
85            return "";
86
87        boolean e = false;
88
89        for (Character i : s.toCharArray()) {
90            if (i == '@' || i == '.') {
91                e = true;
92                break;
93            }
94        }
95
96        System.out.println(s.toLowerCase());
97
98        if (e) {
99            return email(s);
100        }
101
102        return phone(s);
103
104    }
105}