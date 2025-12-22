1class Solution {
2public:
3    int largestPerimeter(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int ans=0;
6        int a=0,b=0,c=0;
7
8        for(int i=2;i<nums.size();i++)
9        {
10             a=nums[i-2];
11             b=nums[i-1];
12             c=nums[i];
13
14            if((a+b>c)&&(a+c>b)&&(b+c>a))
15            {
16                ans=max(ans,a+b+c);
17            }
18
19        }
20
21        return ans;
22        
23    }
24};