1class Solution {
2public:
3    int alternateDigitSum(int n) {
4
5        int temp=0;
6        while(n>0)
7        {
8            temp=temp*10+(n%10);n/=10;
9        }
10        n=temp;
11
12
13        int i=0;
14        int ans=0;
15        while(n>0)
16        {
17            int r=n%10;
18            if(i%2==0)
19            {
20                ans+=r;
21            }
22            else
23            {
24                ans-=r;
25            }
26            i++;
27            n/=10;
28
29        }
30
31        return ans;
32        
33    }
34};