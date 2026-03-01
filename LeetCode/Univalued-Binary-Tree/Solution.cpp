1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14bool solve(TreeNode* root,int d)
15{
16    if(root==nullptr)return true;
17    if(root->val!=d)
18    {
19        return false;
20    }
21
22    return solve(root->left,d)&&solve(root->right,d);
23}
24    bool isUnivalTree(TreeNode* root) {
25
26       return solve(root,root->val);
27        
28    }
29};