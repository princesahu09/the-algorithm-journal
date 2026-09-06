1class Solution {
2
3    public int countGoodRotations(int[] nums) {
4        int n = nums.length;
5
6        long first = 0;
7        long second = 0;
8        for (int i = 0; i < n; i++) {
9            if (i < n / 2) {
10                first += nums[i];
11            } else {
12                second += nums[i];
13            }
14
15        }
16
17        int ans = 0;
18
19        int i = 0;
20        int j = n / 2;
21        int k = n;
22
23        while (k < 2 * n) {
24            if (first > second) {
25                ans++;
26            }
27            first -= nums[i % n];
28            first += nums[j % n];
29            second -= nums[j % n];
30            second += nums[k % n];
31
32            i++;
33            j++;
34            k++;
35        }
36
37        return ans;
38
39    }
40}