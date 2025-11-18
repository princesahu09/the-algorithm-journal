class Solution {

private:
    bool bits(int index, int k) {

        int sum = 0;
        while (index > 0) {
            int r = index & 1;
            if (r == 1) {
                sum++;
            }
            index >>= 1;
        }

        return sum == k ? true : false;
    }

public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {

        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (bits(i, k)) {
                sum += nums[i];
            }
        }
        return sum;
    }
};