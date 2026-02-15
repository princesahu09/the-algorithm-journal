1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4
5        int product=1;
6
7        int zero=0;
8       
9        for(auto &i:nums)
10        {
11            if(i!=0)
12            {product*=i;
13
14            }
15            else
16            {
17                zero++;
18            }
19        }
20        
21            vector<int>ans(nums.size(),0);
22
23        if(zero>1)
24        {
25            return ans;
26        }
27        else if(zero==1)
28        {
29            for(int i=0;i<nums.size();i++)
30            {
31                if(nums[i]!=0)
32                {
33                   ans[i]=0;
34                }
35                else
36                {
37                    ans[i]=product;
38                }
39            }
40        }
41        else
42        {
43            for(int i=0;i<nums.size();i++)
44            {
45                ans[i]=product/nums[i];
46            }
47        }
48
49        return ans;
50        
51    }
52};