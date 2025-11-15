class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int marker = abs(nums[i]) - 1;
            nums[marker] =-abs(nums[marker]);
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >0) {
                ans.push_back((i + 1));
            }
        }
        return ans;
    }
};