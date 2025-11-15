class Solution {
public:
    long reverse(long num, long ans) {
        if (num == 0) {
            return ans;
        }

        return reverse(num / 10, ans * 10 + (num % 10));
    }
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }

        if (x == reverse(x, 0)) {
            return true;
        } else {
            return false;
        }
    }
};