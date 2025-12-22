1class Solution {
2public:
3    int largestPerimeter(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int ans=0;
6
7        for(int i=2;i<nums.size();i++)
8        {
9            int a=nums[i-2];
10            int b=nums[i-1];
11            int c=nums[i];
12
13            if((a+b>c)&&(a+c>b)&&(b+c>a))
14            {
15                ans=max(ans,a+b+c);
16            }
17
18        }
19
20        return ans;
21        
22    }
23};