1class Solution {
2public:
3    int mostFrequent(vector<int>& nums, int key) {
4
5       
6            unordered_map<int,int>freq;
7            int  ans=0;
8
9        for(int i=0;i+1<nums.size();i++)
10        {
11            if(nums[i]==key)
12            {
13                freq[nums[i+1]]++;
14               
15            }
16        }
17
18
19        int high=0;
20        for(auto &i:freq)
21        {
22            if(i.second>high)
23            {
24                ans=i.first;
25                high=i.second;
26            }
27        }
28
29        return ans;
30        
31    }
32};