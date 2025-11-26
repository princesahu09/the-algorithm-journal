1class Solution {
2public:
3    int sumBase(int n, int k) {
4        int ans=0;
5
6        while(n>0)
7        {
8            int r=n%k;
9            ans+=r;
10            n/=k;
11        }
12
13        return ans;
14        
15    }
16};