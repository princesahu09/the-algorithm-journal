class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());

        unordered_map<int, int> greater;

        for (int i = 0; i < nums2.size(); i++) {
            int low = -1;
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    low = nums2[j];
                    break;
                }
            }
            greater[nums2[i]] = low;
        }

        for (int i = 0; i < nums1.size(); i++) {
            int element = nums1[i];
            ans[i] = greater[element];
        }

        return ans;
    }
};