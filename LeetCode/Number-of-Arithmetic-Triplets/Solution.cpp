1class Solution {
2public:
3    int arithmeticTriplets(vector<int>& nums, int diff) {
4      
5        int ans=0;
6      const  unordered_set<int>s(nums.begin(),nums.end());
7
8        for(auto &x:nums)
9        {
10            if(s.count(x+diff)&&s.count(x+2*diff))
11            {
12                ans++;
13            }
14        }
15
16
17      
18        return ans;
19        
20    }
21};