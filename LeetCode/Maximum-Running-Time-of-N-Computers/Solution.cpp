1class Solution {
2public:
3    long long maxRunTime(int n, vector<int>& batteries) {
4
5        typedef long long ll;
6        sort(batteries.begin(), batteries.end());
7        ll sum=accumulate(batteries.begin(),batteries.end(),0LL);
8
9        for(int i=batteries.size()-1;i>=0;i--)
10        {
11            ll avg=sum/n;
12            if(batteries[i]>avg)
13            {
14                sum-=batteries[i];
15                n--;
16            }
17            else break;
18        }
19
20       
21        
22        
23        return sum/n;
24    }
25};