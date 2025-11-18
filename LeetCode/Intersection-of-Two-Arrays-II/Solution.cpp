class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        unordered_map<int, int> freq;

        for (auto& i : nums1) {
            
                freq[i]++;
            
        }
        for (auto& i : nums2) {
            if (freq.count(i) && freq[i] > 0) {
                ans.push_back(i);
                freq[i]--;
            }
        }

        return ans;
    }
};