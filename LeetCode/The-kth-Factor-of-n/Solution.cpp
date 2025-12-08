1class Solution {
2public:
3    int kthFactor(int n, int k) {
4       
5
6        for(int i=1;i<=n;i++)
7        {
8            if(n%i==0)
9            {
10               
11                k--;
12                if(k==0)
13                {
14                    return i;
15                }
16            }
17        }
18
19        return -1;
20        
21    }
22};