1class Solution {
2
3    boolean check(int[] nums) {
4        for (int i : nums) {
5            if (i == 0) {
6                return false;
7            }
8        }
9
10        return true;
11    }
12
13    public int minOperations(int[] nums) {
14
15        int n = nums.length;
16        int ans = 0;
17
18        for (int i = 0; i + 2 < n; i++) {
19
20            if (nums[i] == 1) {
21                continue;
22            } else {
23                nums[i] = 1;
24                nums[i + 1] = nums[i + 1] == 0 ? 1 : 0;
25                nums[i + 2] = nums[i + 2] == 0 ? 1 : 0;
26                ans++;
27            }
28
29        }
30
31        if (check(nums)) {
32            return ans;
33        }
34
35        return -1;
36
37    }
38}