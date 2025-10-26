class Solution {
public:
    int countDigits(int num) {

        int ans = 0;
        int i = num;
        while (i > 0) {
            int r = i % 10;
            if (num % r == 0) {
                ans++;
              
            }
              i /= 10;
        }

        return ans;
    }
};