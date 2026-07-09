1class Solution {
2
3    class Node {
4        long value;
5        int len;
6        int sum;
7
8        Node() {
9
10        }
11
12        Node(long value, int len, int sum) {
13            this.value = value;
14            this.len = len;
15            this.sum = sum;
16        }
17    }
18
19    long MOD = 1000000007L;
20    long[] pow10;
21
22    // void print(int[] arr) {
23    //     for (int i : arr) {
24    //         System.out.print(i + " ");
25    //     }
26    //     System.out.println();
27    // }
28
29    Node merge(Node left, Node right) {
30        Node ans = new Node(0, 0, 0);
31        ans.len = left.len + right.len;
32
33        ans.sum = left.sum + right.sum;
34
35        ans.value = ((left.value * pow10[right.len]) % MOD + right.value) % MOD;
36
37        return ans;
38    }
39
40    void build(int node, int start, int end, String s, Node[] infoTree) {
41        if (start == end) {
42
43            int digit = (int) (s.charAt(start) - '0');
44
45            if (digit == 0) {
46                infoTree[node] = new Node(0, 0, 0);
47            } else {
48                infoTree[node] = new Node(digit, 1, digit);
49            }
50
51            return;
52
53        }
54
55        int mid = start + (end - start) / 2;
56
57        build(2 * node, start, mid, s, infoTree);
58        build(2 * node + 1, mid + 1, end, s, infoTree);
59
60        infoTree[node] = merge(infoTree[2 * node], infoTree[2 * node + 1]);
61
62    }
63
64    Node query(int node, int start, int end, int l, int r, Node[] infoTree) {
65        if (start > r || end < l) {
66            return new Node(0, 0, 0);
67        }
68
69        if (start >= l && end <= r) {
70            return infoTree[node];
71        }
72
73        int mid = start + (end - start) / 2;
74        Node left = query(2 * node, start, mid, l, r, infoTree);
75        Node right = query(2 * node + 1, mid + 1, end, l, r, infoTree);
76
77        return merge(left, right);
78    }
79
80    public int[] sumAndMultiply(String s, int[][] queries) {
81
82        int n = s.length();
83
84        pow10 = new long[n + 1];
85        pow10[0] = 1;
86        for (int i = 1; i <= n; i++) {
87            pow10[i] = (pow10[i - 1] * 10) % MOD;
88        }
89        Node[] infoTree = new Node[4 * n];
90
91        build(1, 0, n - 1, s, infoTree);
92
93        int[] ans = new int[queries.length];
94
95        for (int i = 0; i < queries.length; i++) {
96
97            int l = queries[i][0];
98            int r = queries[i][1];
99
100            Node res = query(1, 0, n - 1, l, r, infoTree);
101
102            ans[i] = (int) ((res.value * res.sum) % MOD);
103
104        }
105
106        return ans;
107
108    }
109}