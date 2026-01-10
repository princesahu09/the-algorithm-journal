1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5
6        const int n=nums.size();
7    
8        int index=0;
9        int mid=(n+1)/2;
10        int i=0;
11        int j=mid;
12
13       vector<int>ans(n);
14       
15       while(i<mid||j<n)
16
17       {
18        if(i<mid)ans[index++]=nums[i++];
19        if(j<n)ans[index++]=nums[j++];
20        
21       }
22
23       return ans;
24       
25    }
26};