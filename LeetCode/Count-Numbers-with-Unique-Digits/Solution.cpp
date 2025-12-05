1class Solution {
2public:
3    int countNumbersWithUniqueDigits(int n) {
4
5        if(n==0)return 1;
6        if(n==1)return 10;
7
8        int sum=81;
9        int ans=10+sum;
10        int m=8;
11
12        for(int i=3;i<=n;i++)
13        {
14            sum*=m;
15            ans+=sum;
16            m--;
17
18
19        }
20        return ans;
21        
22    }
23};