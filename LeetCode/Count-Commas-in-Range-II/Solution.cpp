1class Solution {
2public:
3    long long countCommas(long long n) {
4
5        int len=to_string(n).size();
6        long long ans=0;
7
8        for(int i=4;i<=len;i++)
9        {
10            long long start=pow(10,i-1);
11            long long end=min(n,(long long)pow(10,i)-1);
12            if(start>n)break;
13            long long number=end-start+1;
14            int c=(i-1)/3;
15            ans+=(c*number);
16        }
17        return ans;
18        
19    }
20};