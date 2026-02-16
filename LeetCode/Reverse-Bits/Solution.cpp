1class Solution {
2public:
3    int reverseBits(int n) {
4
5    int i=0;
6    int ans=0;
7    while(i<32)
8    {
9        int r=n&1;
10        ans=ans<<1;
11       ans=ans|r;
12        
13     n>>=1;
14     i++;
15
16    }
17    return ans;
18        
19    }
20};