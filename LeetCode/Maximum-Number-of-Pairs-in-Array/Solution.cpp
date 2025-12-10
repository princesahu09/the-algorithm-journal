1class Solution {
2public:
3    vector<int> numberOfPairs(vector<int>& nums) {
4
5        unordered_map<int, int> map;
6
7        for (int& i : nums) {
8            map[i]++;
9        }
10        int pair = 0;
11      
12        int left = 0;
13
14        for (auto& i : map) {
15           pair+=i.second/2;
16           left+=i.second%2;
17        }
18        return {pair, left};
19    }
20};