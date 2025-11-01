class Solution {
public:
    const int MOD = 1e9 + 7;
    bool prime(int x) {
        if (x < 2)
            return false;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0)
                return false;
        }
        return true;
    }
    long long fa(int x) {
        long long p = 1;
        for (int i = 1; i <= x; i++) {
            p = (p * i) % MOD;
        }
        return p;
    }
    int numPrimeArrangements(int n) {
        int count = 0;

        for (int i = 1; i <= n; i++) {

            if (prime(i)) {
                count++;
            }
        }
        long long ans = (fa(count) * fa(n - count)) % MOD;
        return ans;
    }
};