1class Solution {
2
3    int area(int[] heights) {
4        Stack<Integer> s = new Stack<>();
5        int n = heights.length;
6
7        int[] rs = new int[n];
8        int[] ls = new int[n];
9
10        for (int i = n - 1; i >= 0; i--) {
11
12            while (!s.empty() && heights[i] <= heights[s.peek()]) {
13                s.pop();
14            }
15
16            rs[i] = s.size() == 0 ? n : s.peek();
17            s.push(i);
18        }
19
20        s.clear();
21        for (int i = 0; i < n; i++) {
22            while (!s.empty() && heights[i] <= heights[s.peek()]) {
23                s.pop();
24            }
25            ls[i] = s.size() == 0 ? -1 : s.peek();
26            s.push(i);
27        }
28
29        int ans = 0;
30
31        for (int i = 0; i < n; i++) {
32            int w = rs[i] - ls[i] - 1;
33            int h = heights[i];
34
35            ans = Math.max(ans, w * h);
36        }
37
38        return ans;
39    }
40
41    public int maximalRectangle(char[][] matrix) {
42
43        int m = matrix.length;
44        int n = matrix[0].length;
45
46        int[] heights = new int[n];
47
48        int ans = Integer.MIN_VALUE;
49
50        for (int i = 0; i < m; i++) {
51
52            for (int j = 0; j < n; j++) {
53                if (matrix[i][j] == '1') {
54                    heights[j]++;
55                } else {
56                    heights[j] = 0;
57                }
58            }
59
60            int temp = area(heights);
61
62            ans = Math.max(ans, temp);
63        }
64
65        return ans;
66
67    }
68}