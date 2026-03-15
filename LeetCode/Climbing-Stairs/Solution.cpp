1class Solution {
2public:
3    int climbStairs(int n) {
4        if(n<=2)return n;
5
6        vector<int>t(n);
7
8        t[0]=1;
9        t[1]=2;
10        for(int i=2;i<n;i++)
11        {
12            t[i]=t[i-1]+t[i-2];
13        }
14        return t[n-1];
15        
16    }
17};