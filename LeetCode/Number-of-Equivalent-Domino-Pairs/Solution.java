1class Solution {
2    public int numEquivDominoPairs(int[][] d) {
3
4        Arrays.sort(d,(a,b)->{
5            if(a[0]==b[0])
6            {
7                return a[1]-b[1];
8            }
9            return a[0]-b[0];
10        });
11
12        int ans = 0;
13
14        for (int i = 0; i < d.length; i++) {
15
16            int a = d[i][0];
17            int b = d[i][1];
18
19            for (int j = i+1; j < d.length; j++) {
20                int c = d[j][0];
21                int e = d[j][1];
22
23                if (i != j && ((a == c && b == e) || (a == e && b == c))) {
24                    ans++;
25                }
26            }
27
28        }
29        return ans;
30
31    }
32}