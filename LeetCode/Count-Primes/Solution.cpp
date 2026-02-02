1class Solution {
2public:
3    int countPrimes(int n) {
4
5        if(n<=2)return 0;
6
7
8        vector<bool>sieve(n+1,false);
9
10        for(int i=2;i*i<n;i++)
11        {
12            if(!sieve[i])
13            {
14                for(int j=i*i;j<n;j+=i)
15                {
16                    sieve[j]=true;
17                }
18            }
19        }
20        int ans=0;
21
22        for(int i=2;i<n;i++)
23        {
24            if(!sieve[i])
25            {
26                ans++;
27            }
28        }
29
30
31        return ans;
32        
33    }
34};