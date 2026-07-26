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
28            if(nums[i]==0)
29            {
30                continue;
31            }
32
33            Set<Integer> st = new HashSet<>();
34
35            st.add(i);
36            boolean isPos = nums[i] > 0;
37
38            int curr = i;
39
40            while (true) {
41                int next = calNextIdx(nums, curr);
42                
43               
44
45                if (isPos) {
46
47                    if (nums[next] < 0) {
48                        break;
49                    } else {
50
51                        if (st.contains(next)) {
52
53                            if (curr != next) {
54                                return true;
55                            } else {
56                                break;
57                            }
58
59                        }
60
61                        st.add(next);
62
63                    }
64
65                }
66
67                else {
68
69                    if (nums[next] > 0) {
70                        break;
71                    } else {
72
73                        if (st.contains(next)) {
74
75                            if (curr != next) {
76                                return true;
77                            } else {
78                                break;
79                            }
80
81                        }
82
83                        st.add(next);
84
85                    }
86
87                }
88
89              
90
91                curr = next;
92
93
94            }
95
96            curr=i;
97
98            if(isPos)
99            {
100                while(nums[curr]>0)
101                {
102                        int next=calNextIdx(nums,curr);
103                        nums[curr]=0;
104                }
105            }
106            else
107            {
108                while(nums[curr]<0)
109                {
110                        int next=calNextIdx(nums,curr);
111                        nums[curr]=0;
112                }
113
114            }
115
116        }
117
118        return false;
119
120    }
121}