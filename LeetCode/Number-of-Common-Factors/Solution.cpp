1class Solution {
2public:
3    int commonFactors(int a, int b) {
4        int ans=0;
5
6        for(int i=1;i<=min(a,b);i++)
7        {
8            if(a%i==0&&b%i==0)
9            {
10                ans+=1;
11            }
12
13        }
14        return ans;
15        
16    }
17};