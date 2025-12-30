1class Solution {
2public:
3    int countTime(string time) {
4
5        int hh = 0;
6        int min = 0;
7        if (true)
8
9        {
10            if (time[0] == '?' && time[1] == '?') {
11                hh = 24;
12            } else if (time[0] != '?' && time[1] == '?') {
13               if(time[0]<'2')
14               {
15                hh=10;
16               }
17               else
18               {
19                hh=4;
20               }
21            } else if (time[0] == '?' && time[1] != '?') {
22                if (time[1] > '3') {
23                    hh = 2;
24                } else
25                    hh = 3;
26            }
27        }
28
29        if(hh==0)hh=1;
30
31        if(true)
32        {
33            if(time[3]=='?'&&time[4]=='?')
34            {
35                min=60;
36            }
37            else if(time[3]=='?'&&time[4]!='?')
38            {
39                min=6;
40            }
41            else if(time[3]!='?'&&time[4]=='?')
42            {
43                min=10;
44
45            }
46        }if(min==0)min=1;
47
48
49        if(hh>0&&min>0)return hh*min;
50          
51
52        else if(hh<0)return min;
53        return hh;
54
55        
56    }
57};