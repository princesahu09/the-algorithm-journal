1class Solution {
2    public boolean canJump(int[] nums) {
3
4        int reach = nums[0];
5
6        for (int i = 1; i < nums.length; i++) {
7            if (reach < i) {
8                return false;
9            }
10            if (reach >= nums.length - 1) {
11                return true;
12            }
13
14            reach = Math.max(reach, i + nums[i]);
15        }
16
17        return true;
18
19    }
20}