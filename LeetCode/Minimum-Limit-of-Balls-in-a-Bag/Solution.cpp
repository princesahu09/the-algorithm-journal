1class Solution {
2public:
3    bool isValid(vector<int>& nums, int m, int maxAllow) {
4        int count=0;
5        for (int i = 0; i < nums.size(); i++) {
6
7            count+=(nums[i]-1)/maxAllow;
8           
9            
10            if (count > m)
11                return false;
12        }
13        return true;
14    }
15    int minimumSize(vector<int>& nums, int m) {
16      
17        const int n=nums.size();
18
19        typedef long long ll;
20        ll start = 1;
21        ll end = *max_element(nums.begin(),nums.end());
22        int ans = end;
23        while (start <= end) {
24            long long mid = start + (end - start) / 2;
25
26            if (isValid(nums, m, mid)) {
27                ans = mid;
28                end = mid - 1;
29            } else {
30                start = mid + 1;
31            }
32        }
33
34        return ans;
35    }
36};