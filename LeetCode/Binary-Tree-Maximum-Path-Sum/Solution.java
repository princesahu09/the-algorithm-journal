1/**
2 * Definition for a binary tree node.
3 * public class TreeNode {
4 *     int val;
5 *     TreeNode left;
6 *     TreeNode right;
7 *     TreeNode() {}
8 *     TreeNode(int val) { this.val = val; }
9 *     TreeNode(int val, TreeNode left, TreeNode right) {
10 *         this.val = val;
11 *         this.left = left;
12 *         this.right = right;
13 *     }
14 * }
15 */
16class Solution {
17    int ans = Integer.MIN_VALUE;
18
19    int solve(TreeNode root) {
20        if (root == null) {
21            return Integer.MIN_VALUE;
22        }
23        int left = Math.max(0, solve(root.left));
24        int right = Math.max(0, solve(root.right));
25
26        ans = Math.max(ans, root.val + left + right);
27
28        return root.val + Math.max(left, right);
29    }
30
31    public int maxPathSum(TreeNode root) {
32
33        solve(root);
34
35        return ans;
36
37    }
38}