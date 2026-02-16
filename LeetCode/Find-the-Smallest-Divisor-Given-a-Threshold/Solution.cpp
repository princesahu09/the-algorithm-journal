1class Solution {
2public:
3
4bool isValid(vector<int>&nums,int threshold,int divisor)
5{
6
7    int sum=0;
8    for(int i=0;i<nums.size();i++)
9    {
10
11      //  if(nums[i]%divisor!=0)return -1;
12        sum+=(nums[i]+divisor-1)/divisor;
13
14
15    }
16    
17
18    return sum<=threshold;
19}
20    int smallestDivisor(vector<int>& nums, int threshold) {
21
22        long long start=1;
23        long long end=*max_element(nums.begin(),nums.end());
24
25        long long ans=INT_MAX;
26
27
28        while(start<=end)
29        {
30            long long mid=start+(end-start)/2;
31           
32            if(isValid(nums,threshold,mid))
33            {
34                ans=mid;
35                end=mid-1;
36            }
37            else
38            {
39                start=mid+1;
40            }
41
42        }
43        return ans;
44        
45    }
46};