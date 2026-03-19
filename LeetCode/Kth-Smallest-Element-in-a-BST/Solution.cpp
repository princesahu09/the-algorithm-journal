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
15    int solve(TreeNode* root, int& k) {
16        if (root == nullptr) {
17            return -1;
18        }
19
20        int left = solve(root->left, k);
21
22        if (left != -1)
23            return left;
24
25        k--;
26        if (k == 0) {
27            return root->val;
28        }
29
30        return solve(root->right, k);
31    }
32    int kthSmallest(TreeNode* root, int k) { return solve(root, k); }
33};