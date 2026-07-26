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
24            if (nums[i] == 0) {
25                continue;
26            }
27
28            boolean isPos = nums[i] > 0;
29
30            int curr = i;
31            int slow = i;
32            int fast = i;
33
34            do {
35                slow = calNextIdx(nums, slow);
36                fast = calNextIdx(nums, fast);
37
38                if (isPos) {
39                    if (nums[fast] < 0) {
40                        break;
41                    }
42                } else {
43                    if (nums[fast] > 0) {
44                        break;
45                    }
46                }
47                fast = calNextIdx(nums, fast);
48                if (isPos) {
49                    if (nums[fast] < 0) {
50                        break;
51                    }
52                } else {
53                    if (nums[fast] > 0) {
54                        break;
55                    }
56                }
57
58                if (slow == fast) {
59
60                    if (slow != calNextIdx(nums, slow)) {
61                        return true;
62
63                    } else {
64                        break;
65                    }
66                }
67
68            } while (slow != fast);
69
70            if (isPos) {
71                while (nums[curr] > 0) {
72                    int next = calNextIdx(nums, curr);
73                    nums[curr] = 0;
74                    curr = next;
75                }
76            } else {
77                while (nums[curr] < 0) {
78                    int next = calNextIdx(nums, curr);
79                    nums[curr] = 0;
80                    curr = next;
81                }
82
83            }
84
85        }
86
87        return false;
88
89    }
90}