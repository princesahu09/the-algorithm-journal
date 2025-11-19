class Solution {

public:
    bool binarySearch(vector<int>& nums, int original) {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == original) {
                return true;
            } else if (original > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return false;
    }
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());

        if (nums.back() >= original || original >= nums.front()) {
            while (original <= nums.back()) {
                if (binarySearch(nums, original)) {
                    original *= 2;
                } else {

                    return original;
                }
            }
        }

        return original;
    }
};