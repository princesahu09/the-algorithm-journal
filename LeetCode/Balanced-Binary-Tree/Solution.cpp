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
14
15private:
16    int height(TreeNode* root) {
17        if (root == nullptr)
18            return 0;
19
20        return 1 + max(height(root->right), height(root->left));
21    }
22
23    bool solve(TreeNode* root) {
24        if (root == nullptr) {
25            return true;
26        }
27       
28
29        if (abs(height(root->left) - height(root->right) )>1) {
30            return false;
31        }
32
33        return solve(root->left) && solve(root->right);
34    }
35
36public:
37    bool isBalanced(TreeNode* root) { return solve(root); }
38};