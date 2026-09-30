1class Solution {
2    public long maxAlternatingSum(int[] nums) {
3
4        nums = Arrays.stream(nums).map(x -> Math.abs(x)).toArray();
5
6        Arrays.sort(nums);
7
8        int start = 0;
9        int end = nums.length - 1;
10
11        long ans = 0;
12        while(start<end)
13        {
14            ans+=((nums[end]+nums[start])*(nums[end]-nums[start]));
15            end--;
16            start++;
17        }
18
19        if(nums.length%2==1)
20        {
21            ans+=(nums[end]*nums[end]);
22        }
23
24      
25
26        return ans;
27
28    }
29}