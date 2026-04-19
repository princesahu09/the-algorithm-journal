1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        vector<int> prefix(n, 0);
7        vector<int> suffix(n, 0);
8
9        prefix[0] = nums[0];
10        suffix[n - 1] = nums[n - 1];
11        for (int i = 1; i < nums.size(); i++) {
12            prefix[i] = max(prefix[i - 1], nums[i]);
13        }
14        for (int i = n - 2; i >= 0; i--) {
15            suffix[i] = min(suffix[i + 1], nums[i]);
16        }
17        vector<int> arr(n, 0);
18
19        for (int i = 0; i < n; i++) {
20            
21            arr[i] = prefix[i] - suffix[i];
22            
23        }
24
25        int ans=-1;
26        for(int i=0;i<n;i++)
27        {
28            if(arr[i]<=k)
29            {
30                if(ans==-1)
31                {
32                    ans=i;
33                }
34                else
35                {
36                    ans=min(ans,i);
37                }
38            }
39        }
40
41        return  ans;
42    }
43};