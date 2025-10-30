class Solution {
public:
    int climbStairs(int n) {

        long double theta = (1 + sqrt(5)) / 2;
       long  double psi =  (1 - sqrt(5)) / 2;
         double result = (powl(theta, n + 1) -powl(psi, n + 1)) / sqrt(5);

        return llround(result);
    }
};