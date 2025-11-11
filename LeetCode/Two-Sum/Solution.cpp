class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mapping;

        for (int i = 0; i < nums.size(); i++) {

            if (!mapping.count(nums[i])) {
                mapping[nums[i]] = i;
            }
        }

        vector<int> ans(2);

        for (int i = 0; i < nums.size(); i++) {
            int less = target - nums[i];

            if (mapping.count(less) == 1 && mapping[less] != i) {
                ans[0]=i;
                ans[1]=mapping[less];
                break;
            } else {
                continue;
            }
        }

        return ans;
    }
};