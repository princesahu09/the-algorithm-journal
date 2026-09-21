1class Solution {
2    public boolean isLongPressedName(String name, String typed) {
3
4        int i = 0;
5        int j = 0;
6
7        while (j < typed.length()) {
8
9            if (i < name.length() && name.charAt(i) == typed.charAt(j)) {
10                i++;
11                j++;
12            }
13
14            else if (j > 0 && typed.charAt(j) == typed.charAt(j - 1)) {
15                j++;
16            }
17
18            else {
19                return false;
20            }
21
22        }
23
24        return i == name.length();
25
26    }
27}