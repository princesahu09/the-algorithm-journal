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
15    int diff(TreeNode* root, int value) {
16        if (root == nullptr) {
17            return 0;
18        }
19        return max(abs(value - root->val),
20                   max(diff(root->left, value), diff(root->right, value)));
21    }
22
23    int solve(TreeNode* root) {
24        if (root == nullptr) {
25            return 0;
26        }
27
28        int high =
29            max(diff(root->left, root->val), diff(root->right, root->val));
30
31        return max(high, max(solve(root->left), solve(root->right)));
32    }
33    int maxAncestorDiff(TreeNode* root) { return solve(root); }
34};