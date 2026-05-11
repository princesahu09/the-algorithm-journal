1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4        vector<int>ans;
5
6
7        for(int i=0;i<nums.size();i++)
8        {
9            vector<int>demo;
10
11            while(nums[i]>0)
12            {
13                demo.push_back(nums[i]%10);
14                nums[i]/=10;
15            }
16            reverse(demo.begin(),demo.end());
17            ans.insert(ans.end(),demo.begin(),demo.end());
18          
19        }
20        return ans;
21        
22    }
23};