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
17
18    int ans = Integer.MIN_VALUE;
19
20    class Quad {
21        int sum;
22        boolean isBST;
23        int min;
24        int max;
25
26        Quad(int sum, boolean isBST, int min, int max) {
27            this.sum = sum;
28            this.isBST = isBST;
29            this.min = min;
30            this.max = max;
31        }
32    }
33
34    Quad solve(TreeNode root) {
35        if (root == null) {
36
37            return new Quad(0, true, Integer.MAX_VALUE, Integer.MIN_VALUE);
38
39        }
40
41        int curr = root.val;
42
43        Quad left = solve(root.left);
44        Quad right = solve(root.right);
45
46        if (left.isBST && right.isBST && root.val > left.max && root.val < right.min) {
47
48            curr += left.sum + right.sum;
49            ans = Math.max(ans, curr);
50            int low = Math.min(root.val, left.min);
51            int high = Math.max(root.val, right.max);
52
53            return new Quad(curr, true, low, high);
54
55        }
56        return new Quad(0, false, 0, 0);
57
58    }
59
60    public int maxSumBST(TreeNode root) {
61
62        solve(root);
63
64        return ans < 0 ? 0 : ans;
65
66    }
67}