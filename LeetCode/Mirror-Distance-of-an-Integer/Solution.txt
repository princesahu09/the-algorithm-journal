1class Solution {
2public:
3    int reverse(int num)
4    {
5        int ans=0;
6
7        while(num>0)
8            {
9                ans=ans*10+(num%10);
10                num/=10;
11            }
12        return ans;
13    }
14    int mirrorDistance(int n) {
15
16        return abs(n-reverse(n));
17        
18    }
19};