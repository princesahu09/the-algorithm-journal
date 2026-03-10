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
15    void solve(TreeNode* root, TreeNode* &ans) {
16
17        if (root == nullptr) {
18            return ;
19        }
20        solve(root->left, ans);
21        TreeNode* newNode = new TreeNode(root->val);
22        ans->right = newNode;
23        ans=newNode;
24
25        solve(root->right, ans);
26
27       
28    }
29    TreeNode* increasingBST(TreeNode* root) {
30        TreeNode* ans = new TreeNode(-1);
31        TreeNode* curr=ans;
32        solve(root,curr);
33
34        return ans->right;
35    }
36};