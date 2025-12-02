1class Solution {
2public:
3    vector<int> evenOddBit(int n) {
4
5
6        int i=0;
7        int even=0,odd=0;
8
9        while(n>0)
10        {
11            int r=n&1;
12            if(r)
13            {
14                if(i%2==0)
15                {
16                    even+=1;
17                }
18                else
19                {
20                    odd+=1;
21                }
22            }
23            i++;
24            n>>=1;
25           
26        }
27
28        return {even,odd};
29        
30    }
31};