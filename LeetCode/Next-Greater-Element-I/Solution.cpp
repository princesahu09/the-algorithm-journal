1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> ans(nums1.size());
5
6        unordered_map<int, int> greater;
7
8        for (int i = 0; i < nums2.size(); i++) {
9            int low = -1;
10            for (int j = i + 1; j < nums2.size(); j++) {
11                if (nums2[j] > nums2[i]) {
12                    low = nums2[j];
13                    break;
14                }
15            }
16            greater[nums2[i]] = low;
17        }
18
19        for (int i = 0; i < nums1.size(); i++) {
20            int element = nums1[i];
21            ans[i] = greater[element];
22        }
23
24        return ans;
25    }
26};