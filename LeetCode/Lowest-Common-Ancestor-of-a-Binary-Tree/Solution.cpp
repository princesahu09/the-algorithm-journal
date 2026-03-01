1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
13
14        if (!root)
15            return nullptr;
16
17        if (root == p || root == q)
18            return root;
19
20        TreeNode* left = lowestCommonAncestor(root->left, p, q);
21        TreeNode* right = lowestCommonAncestor(root->right, p, q);
22
23        if (left && right)
24            return root;
25
26        else if (left != nullptr)
27            return left;
28        else {
29            return right;
30        }
31    }
32};