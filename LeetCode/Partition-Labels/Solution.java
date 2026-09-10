1class Solution {
2
3    int finder(String s, char ch) {
4
5        for (int i = s.length() - 1; i >= 0; i--) {
6            if (ch == s.charAt(i)) {
7                return i;
8            }
9        }
10        return -1;
11    }
12
13    int check(String s, char ch, int start) {
14
15        for (int i = s.length() - 1; i >= start; i--) {
16            if (ch == s.charAt(i)) {
17                return i;
18            }
19        }
20
21        return -1;
22
23    }
24
25    public List<Integer> partitionLabels(String s) {
26        List<Integer> ans = new ArrayList<>();
27
28        int n = s.length();
29        int i = 0;
30
31        while (i < n) {
32
33            char ch = s.charAt(i);
34            int index = finder(s, ch);
35            if (index == i) {
36                ans.add(1);
37                i++;
38
39            } else {
40                int j = i + 1;
41
42                while (j < index && j < n) {
43                    int temp = check(s, s.charAt(j), index + 1);
44                    if (temp != -1) {
45                        index = temp;
46
47                    }
48                    j++;
49
50                }
51
52                ans.add(j - i + 1);
53                i = j + 1;
54            }
55        }
56
57        return ans;
58
59    }
60}