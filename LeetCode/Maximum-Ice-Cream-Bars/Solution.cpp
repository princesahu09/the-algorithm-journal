1class Solution {
2public:
3    int maxIceCream(vector<int>& costs, int coins) {
4        sort(costs.begin(),costs.end());
5
6
7        int ans=0;
8
9
10        for(auto &i:costs)
11        {
12            if(coins-i>=0)
13            {
14                ans++;
15                coins-=i;
16            }
17        }
18        return ans;
19    }
20        
21};