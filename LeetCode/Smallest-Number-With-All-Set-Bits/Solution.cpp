class Solution {
public:
    int smallestNumber(int n) {
        int count = 0;
        int ans = 0;

        while (n != 0) {
            count++;
            n = n >> 1;
        }
        while (count > 0) {
            count--;

            ans = ans | (1 << count);
        }

        return ans;
    }
};