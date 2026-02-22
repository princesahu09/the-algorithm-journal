1class Solution {
2public:
3    int diagonalSum(vector<vector<int>>& nums) {
4
5       
6        int sum = 0;
7        const int n = nums.size();
8        for (int i = 0; i < n; i++) {
9            sum += nums[i][n - i - 1];
10            sum += nums[i][i];
11        }
12
13        if (n % 2 != 0) {
14            sum -= nums[n / 2][n / 2];
15        }
16        return sum;
17    }
18};