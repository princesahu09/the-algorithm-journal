1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4
5        unordered_map<int, int> mp;
6
7        for (int i : candyType) {
8            mp[i]++;
9        }
10
11        return min(candyType.size() / 2, mp.size());
12    }
13};