class Solution {

private:
    long long countUgly(long long n, long long a, long long b, long long c)
    {
        long long ab = lcm(a, b);
        long long bc = lcm(b, c);
        long long ac = lcm(a, c);
        long long abc = lcm(ab, c);

        return n / a + n / b + n / c
             - n / ab - n / bc - n / ac
             + n / abc;
    }

public:
    int nthUglyNumber(int n, int a, int b, int c) {
        
        long long low = 1, high = 2e9
        ;  
        
        while (low < high)
        {
            long long mid = low + (high - low) / 2;
            long long cnt = countUgly(mid, a, b, c);

            if (cnt >= n)
                high = mid;
            else
                low = mid + 1;
        }

        return low;
    }
};
