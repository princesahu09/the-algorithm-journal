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
15    TreeNode* solve(TreeNode*& root, int val) {
16        if (root == nullptr) {
17            return nullptr;
18        }
19        if (root->val == val) {
20            return root;
21        }
22
23        if (val < root->val) {
24            return solve(root->left, val);
25        } else
26            return solve(root->right, val);
27    }
28    TreeNode* searchBST(TreeNode* root, int val) { return solve(root, val); }
29};