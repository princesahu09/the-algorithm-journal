class Solution {
public:
    int countDigits(int num) {

        int ans = 0;
        int i = num;
        while (num > 0) {
            int r = num % 10;
            if (i % r == 0) {
                ans++;
              
            }
              num /= 10;
        }

        return ans;
    }
};