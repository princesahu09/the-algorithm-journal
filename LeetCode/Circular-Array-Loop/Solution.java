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
23        boolean[] visited=new boolean[nums.length];
24
25        Arrays.fill(visited,true);
26
27        for (int i = 0; i < nums.length; i++) {
28
29            Set<Integer> st = new HashSet<>();
30
31            st.add(i);
32            boolean isPos = nums[i] > 0;
33
34            int curr = i;
35
36            while (true) {
37                int next = calNextIdx(nums, curr);
38                
39               
40
41                if (isPos) {
42
43                    if (nums[next] < 0) {
44                        break;
45                    } else {
46
47                        if (st.contains(next)) {
48
49                            if (curr != next) {
50                                return true;
51                            } else {
52                                break;
53                            }
54
55                        }
56
57                        st.add(next);
58
59                    }
60
61                }
62
63                else {
64
65                    if (nums[next] > 0) {
66                        break;
67                    } else {
68
69                        if (st.contains(next)) {
70
71                            if (curr != next) {
72                                return true;
73                            } else {
74                                break;
75                            }
76
77                        }
78
79                        st.add(next);
80
81                    }
82
83                }
84
85              
86
87                curr = next;
88
89
90            }
91
92            curr=i;
93
94            if(isPos)
95            {
96                while(nums[curr]>0)
97                {
98                        int next=calNextIdx(nums,curr);
99                        nums[curr]=0;
100                }
101            }
102            else
103            {
104                while(nums[curr]<0)
105                {
106                        int next=calNextIdx(nums,curr);
107                        nums[curr]=0;
108                }
109
110            }
111
112        }
113
114        return false;
115
116    }
117}