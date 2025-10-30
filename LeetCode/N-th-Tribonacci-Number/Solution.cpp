class Solution {
public:
    int tribonacci(int n) {
        if (n == 0 || n == 1)
            return n;
        else if (n == 2)
            return 1;


        
            int x = 0;
            int y = 1;
            int z = 1;
            int curr;

            for (int i = 3; i <= n; i++) {
                 curr = x + y + z;
                x = y;
                y = z;
                z = curr;
            }
            return z;
        
    }
};