1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
10 * right(right) {}
11 * };
12 */
13class Solution {
14public:
15    int solve(TreeNode* root, unordered_map<TreeNode*, int>& dp) {
16        if (root == nullptr) {
17            return 0;
18        }
19        if (dp.count(root)) {
20            return dp[root];
21        }
22
23        int rob = root->val;
24
25        if (root->left) {
26            rob += solve(root->left->right, dp);
27            rob += solve(root->left->left, dp);
28        }
29        if (root->right) {
30            rob += solve(root->right->left, dp);
31            rob += solve(root->right->right, dp);
32        }
33
34        return dp[root] =
35                   max(rob, solve(root->left, dp) + solve(root->right, dp));
36    }
37    int rob(TreeNode* root) {
38        unordered_map<TreeNode*, int> dp;
39
40        return solve(root, dp);
41    }
42};