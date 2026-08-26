1class Solution {
2    public String alphabetBoardPath(String target) {
3
4        StringBuffer ans = new StringBuffer("");
5        int sr = 0;
6        int sc = 0;
7
8        for (int i = 0; i < target.length(); i++) {
9
10            int ch = (int) (target.charAt(i) - 'a');
11
12            int row = ch / 5;
13            int col = ch % 5;
14            if (target.charAt(i) != 'z') {
15                if (sr - row > 0) {
16                    int diff = Math.abs(sr - row);
17                    for (int j = 0; j < diff; j++) {
18                        ans.append('U');
19                    }
20                }
21                if (sr - row < 0) {
22                    int diff = Math.abs(sr - row);
23                    for (int j = 0; j < diff; j++) {
24                        ans.append('D');
25                    }
26
27                }
28                if (sc - col > 0) {
29                    int diff = Math.abs(sc - col);
30                    for (int j = 0; j < diff; j++) {
31                        ans.append('L');
32                    }
33                }
34                if (sc - col < 0) {
35                    int diff = Math.abs(sc - col);
36                    for (int j = 0; j < diff; j++) {
37                        ans.append('R');
38                    }
39
40                }
41            } else {
42                if (sc - col > 0) {
43                    int diff = Math.abs(sc - col);
44                    for (int j = 0; j < diff; j++) {
45                        ans.append('L');
46                    }
47                }
48                if (sc - col < 0) {
49                    int diff = Math.abs(sc - col);
50                    for (int j = 0; j < diff; j++) {
51                        ans.append('R');
52                    }
53
54                }
55                if (sr - row > 0) {
56                    int diff = Math.abs(sr - row);
57                    for (int j = 0; j < diff; j++) {
58                        ans.append('U');
59                    }
60                }
61                if (sr - row < 0) {
62                    int diff = Math.abs(sr - row);
63                    for (int j = 0; j < diff; j++) {
64                        ans.append('D');
65                    }
66
67                }
68
69            }
70
71            ans.append('!');
72            sr = row;
73            sc = col;
74
75        }
76
77        return ans.toString();
78
79    }
80}