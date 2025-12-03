1class Solution {
2public:
3    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
4                              vector<int>& nums3) {
5
6        unordered_set<int> ans;
7
8        unordered_set<int> num11(nums1.begin(), nums1.end());
9        unordered_set<int> num22(nums2.begin(), nums2.end());
10        unordered_set<int> num33(nums3.begin(), nums3.end());
11
12        for (int& i : nums1) {
13            if (num22.count(i) || num33.count(i)) {
14                ans.insert(i);
15            }
16        }
17        for (int& i : nums2) {
18            if (num11.count(i) || num33.count(i)) {
19                ans.insert(i);
20            }
21        }
22        for (int& i : nums3) {
23            if (num22.count(i) || num11.count(i)) {
24                ans.insert(i);
25            }
26        }
27
28        vector<int> result(ans.begin(), ans.end());
29
30        return result;
31    }
32};