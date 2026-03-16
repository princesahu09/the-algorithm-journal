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
15typedef long long ll;
16    bool solve(TreeNode* root, ll low, ll high) {
17        if (root == nullptr) {
18            return true;
19        }
20
21        if (root->val >= high || root->val <= low) {
22            return false;
23        }
24        return solve(root->left, low, root->val) &&
25               solve(root->right, root->val, high);
26    }
27    bool isValidBST(TreeNode* root) { return solve(root, LLONG_MIN, LLONG_MAX); }
28};