1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4
5        int profit=0;
6        int low=prices[0];
7
8        for(int i=0;i<prices.size();i++)
9        {
10            low=min(low,prices[i]);
11            profit=max(profit,prices[i]-low);
12        }
13
14
15
16
17        return profit;
18    }
19
20      
21};