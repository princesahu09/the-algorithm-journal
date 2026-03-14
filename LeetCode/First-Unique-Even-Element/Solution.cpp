1class Solution {
2public:
3    int firstUniqueEven(vector<int>& nums) {
4
5        unordered_map<int,int>freq;
6        for(auto &i:nums)
7        {
8            if(i%2==0)
9            {
10                freq[i]++;
11            }
12        }
13
14        for(int i=0;i<nums.size();i++)
15        {
16            if(nums[i]%2==0)
17            {
18                if(freq.count(nums[i])&&freq[nums[i]]==1)return nums[i];
19            }
20        }
21        return -1;
22        
23    }
24};