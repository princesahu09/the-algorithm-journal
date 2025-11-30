1class Solution {
2public:
3    int maxCoins(vector<int>& piles) {
4        sort(piles.begin(), piles.end());
5        int ans=0;
6        int i=(piles.size())/3;
7        
8        while (i-- >0) {
9            piles.pop_back();
10            ans+=piles.back();
11            piles.pop_back();
12             piles.erase(piles.begin()); 
13        }
14
15        return ans;
16    }
17};