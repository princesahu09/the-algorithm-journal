1class Solution {
2public:
3    bool check(vector<int>& nums, int target) {
4        int start = 0;
5        int end = nums.size() - 1;
6        while (start <= end) {
7            int mid = start + (end - start) / 2;
8            if (nums[mid] == target) {
9                return true;
10            } else if (nums[mid] > target) {
11                end = mid - 1;
12            } else {
13                start = mid + 1;
14            }
15        }
16
17        return false;
18    }
19
20    int sum(vector<int>& nums, int q) {
21        int ans = 0;
22
23        int i = 0;
24
25        while (i < nums.size()) {
26            if (q >= nums[i]) {
27                ans++;
28                q -= nums[i];
29            } else {
30                break;
31            }
32            i++;
33        }
34        return ans;
35    }
36
37    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
38
39        sort(nums.begin(), nums.end());
40
41        vector<int> ans;
42
43        for (int i = 0; i < queries.size(); i++) {
44            
45                ans.push_back(sum(nums, queries[i]));
46            
47        }
48        return ans;
49    }
50};