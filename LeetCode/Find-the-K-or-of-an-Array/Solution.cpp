1class Solution {
2public:
3    int findKOr(vector<int>& nums, int k) {
4        unordered_map<int, int> bitone;
5
6        for (int    &i : nums) {
7            int pos = 0;
8            while (i > 0) {
9                if (i & 1) {
10                    bitone[pos]++;
11                }
12                pos++;
13                i >>= 1;
14            }
15        }
16        int ans=0;
17
18        for(auto &i:bitone)
19        {
20            if(i.second>=k)
21            {
22                ans|=(1<<i.first);
23            }
24
25        }
26
27        return ans;
28    }
29};