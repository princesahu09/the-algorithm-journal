1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        vector<vector<int>> ans;
6        typedef long long ll;
7
8        for (int i = 0; i < nums.size(); i++) {
9
10            if(i>0&&nums[i]==nums[i-1])continue;
11            for (int j = i + 1; j < nums.size(); ) {
12                if(j>0&&nums[j]==nums[j-1])continue;
13
14                int k = j + 1;
15                int l = nums.size() - 1;
16                while (k < l) {
17                    ll sum =(ll) nums[i] + (ll)nums[j] + (ll)nums[k] +(ll)nums[l];
18                    if (sum > target) {
19                        l--;
20
21                    } else if (sum < target) {
22                        k++;
23                    } else {
24                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
25                        k++;
26                        l--;
27                        while (k < l && nums[k] == nums[k - 1])
28                            k++;
29                        while (k < l && nums[l] == nums[l + 1])
30                            l--;
31                    }
32                }
33                j++;
34                while(j<nums.size()&&nums[j]==nums[j-1])j++;
35            }
36        }
37        return ans;
38    }
39};