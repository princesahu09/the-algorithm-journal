1class Solution {
2
3    void build(int node, int start, int end, int[] arr, long[] segmentTree) {
4
5        if (start == end) {
6            segmentTree[node] = arr[start];
7            return;
8        }
9
10        int mid = start + (end - start) / 2;
11
12        build(2 * node, start, mid, arr, segmentTree);
13        build(2 * node + 1, mid + 1, end, arr, segmentTree);
14        segmentTree[node] = segmentTree[2 * node] + segmentTree[2 * node + 1];
15    }
16
17    void push(int node, int start, int end, long[] segmentTree, long[] lazyTree) {
18        if (lazyTree[node] != 0) {
19
20            segmentTree[node] = (end - start + 1) - segmentTree[node];
21
22            if (start != end) {
23                lazyTree[node * 2] ^= 1;
24                lazyTree[node * 2 + 1] ^= 1;
25            }
26
27            lazyTree[node] = 0;
28        }
29    }
30
31    // void pointUpdate(int node, int start, int end, int idx, int value, int[] arr, long[] segmentTree) {
32
33    //     if (start == end) {
34    //         segmentTree[node] = value;
35    //         arr[start] = value;
36    //         return;
37    //     }
38
39    //     int mid = start + (end - start) / 2;
40
41    //     if (idx <= mid) {
42    //         pointUpdate(2 * node, start, mid, idx, value, arr, segmentTree);
43    //     } else
44
45    //     {
46    //         pointUpdate(2 * node + 1, mid + 1, end, idx, value, arr, segmentTree);
47
48    //     }
49
50    //     segmentTree[node] = segmentTree[2 * node] + segmentTree[2 * node + 1];
51    // }
52
53    void rangeUpdate(int node, int start, int end, int l, int r, long[] segmentTree, long[] lazyTree) {
54
55        push(node, start, end, segmentTree, lazyTree);
56
57        if (start > r || end < l) {
58            return;
59        }
60
61        if (l <= start && end <= r) {
62            lazyTree[node] ^= 1;
63
64            push(node, start, end, segmentTree, lazyTree);
65            return;
66        }
67
68        int mid = start + (end - start) / 2;
69
70        rangeUpdate(node * 2, start, mid, l, r, segmentTree, lazyTree);
71        rangeUpdate(node * 2 + 1, mid + 1, end, l, r, segmentTree, lazyTree);
72
73        segmentTree[node] = segmentTree[2 * node] + segmentTree[2 * node + 1];
74    }
75
76    public long[] handleQuery(int[] nums1, int[] nums2, int[][] queries) {
77
78        int n1 = nums1.length;
79        int n2 = nums2.length;
80
81        long[] segmentTree1 = new long[4 * n1];
82        long[] lazyTree1 = new long[4 * n1];
83
84        build(1, 0, n1 - 1, nums1, segmentTree1);
85
86        List<Long> res = new ArrayList<>();
87
88        long sum = Arrays.stream(nums2).asLongStream().sum();
89
90        for (int i = 0; i < queries.length; i++) {
91
92            int type = queries[i][0];
93
94            if (type == 1) {
95                int l = queries[i][1];
96                int r = queries[i][2];
97
98                rangeUpdate(1, 0, n1 - 1, l, r, segmentTree1, lazyTree1);
99
100            }
101
102            else if (type == 2) {
103
104                int p = queries[i][1];
105                sum += (long) p * segmentTree1[1];
106
107            } else {
108
109                res.add(sum);
110
111            }
112
113        }
114
115        long[] ans = new long[res.size()];
116
117        for (int i = 0; i < res.size(); i++) {
118            ans[i] = res.get(i);
119        }
120
121        return ans;
122
123    }
124}