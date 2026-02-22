1class Solution {
2public:
3int check(int temp)
4{
5    int ans=0;
6    while(temp>0)
7    {
8        ans=max(ans,temp%10);
9        temp/=10;
10    }
11    return ans;
12}
13
14    int maxSum(vector<int>& nums) {
15
16        int ans=-1;
17        int high=INT_MIN;
18        const int n=nums.size();
19
20        for(int i=0;i<n;i++)
21        {
22            for(int j=0;j<n;j++)
23            {
24                if(i!=j&&(check(nums[i])==check(nums[j])))
25                {
26                    ans=max(ans,nums[i]+nums[j]);
27
28                }
29            }
30        }
31
32        return ans;
33        
34    }
35};