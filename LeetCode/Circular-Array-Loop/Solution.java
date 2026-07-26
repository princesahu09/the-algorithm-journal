1class Solution {
2    public int calNextIdx(int[] nums, int curr) {
3
4        int next = curr;
5        int seq = nums[curr];
6        if (seq > 0) {
7
8            next = (next + seq) % nums.length;
9
10        } else {
11            int mod = seq % nums.length;
12
13            int forward = nums.length + mod;
14            next = (curr + forward) % nums.length;
15        }
16
17        return next;
18
19    }
20
21    public boolean circularArrayLoop(int[] nums) {
22
23        for (int i = 0; i < nums.length; i++) {
24
25            Set<Integer> st = new HashSet<>();
26
27            st.add(i);
28            boolean isPos = nums[i] > 0;
29
30            int curr = i;
31
32            while (true) {
33                int next = calNextIdx(nums, curr);
34
35                if (isPos) {
36
37                    if (nums[next] < 0) {
38                        break;
39                    } else {
40
41                        if (st.contains(next)) {
42
43                            if (curr != next) {
44                                return true;
45                            } else {
46                                break;
47                            }
48
49                        }
50
51                        st.add(next);
52
53                    }
54
55                }
56
57                else {
58
59                    if (nums[next] > 0) {
60                        break;
61                    } else {
62
63                        if (st.contains(next)) {
64
65                            if (curr != next) {
66                                return true;
67                            } else {
68                                break;
69                            }
70
71                        }
72
73                        st.add(next);
74
75                    }
76
77                }
78
79                curr = next;
80            }
81
82        }
83
84        return false;
85
86    }
87}