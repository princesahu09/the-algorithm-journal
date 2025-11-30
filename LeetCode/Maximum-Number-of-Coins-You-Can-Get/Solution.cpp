1class Solution {
2public:
3    int maxCoins(vector<int>& piles) {
4        sort(piles.begin(), piles.end());
5        const int n=piles.size();
6        int i=n;
7
8        int ans = 0;
9        int round=n/3;
10        while (round>0) {
11
12           i-=2;
13           ans+=piles[i];
14           round--;
15        }
16
17        return ans;
18    }
19};