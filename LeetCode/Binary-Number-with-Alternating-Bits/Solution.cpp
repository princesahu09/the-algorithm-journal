1class Solution {
2public:
3    bool hasAlternatingBits(int n) {
4
5        while(n>0)
6        {
7            int last=n&1;
8            
9            
10            int second=(n>>1)&1;
11            
12            n>>=1;
13            if(last==second)return false;
14        }
15        return true;
16        
17    }
18};