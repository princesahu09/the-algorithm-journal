1class Solution {
2public:
3
4
5  int sumFourDivisors(vector<int>& nums) {
6
7
8        int ans=0;
9        
10
11            int counter=0;
12            int sum_of_divisor=0;
13
14        for(int &n:nums)
15        {
16
17            for(int i=1;i*i<=n;i++)
18            {
19                if(n%i==0)
20                {
21
22                    int d1=i;
23                    int d2=n/i;
24
25                    if(d1==d2)
26                    {
27                        counter++;
28                        sum_of_divisor+=d1;
29                    }
30                    else
31                    {
32                        counter+=2;
33                        sum_of_divisor+=(d1+d2);
34                    }
35                    if(counter>4)
36                    {
37                        break;
38                    }
39                }
40            }
41
42            
43
44            if(counter==4)
45            {
46                ans+=sum_of_divisor;
47            }
48
49            counter=0;
50            sum_of_divisor=0;
51        }
52        return ans;
53
54    
55        
56    }
57};