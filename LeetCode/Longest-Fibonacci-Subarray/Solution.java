1class Solution {
2    public int longestSubarray(int[] nums) {
3
4
5        int ans=2;
6        int counter=2;
7
8        for(int i=1;i+1<nums.length;i++)
9        {
10            if(nums[i-1]+nums[i]==nums[i+1])
11            {
12                counter++;
13            }
14            else
15            {
16                ans=Math.max(ans,counter);
17                counter=2;
18            }
19        }
20        ans=Math.max(ans,counter);
21
22        return ans;
23        
24    }
25}