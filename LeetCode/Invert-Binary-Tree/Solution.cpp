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
13
14    private: void solve(TreeNode* &root)
15    {
16        if(!root)return;
17        TreeNode* Oleft=root->left;
18        TreeNode* Oright=root->right;
19
20        root->left=Oright;
21        root->right=Oleft;
22       
23       
24        solve(root->left);
25        solve(root->right);
26    }
27public:
28    TreeNode* invertTree(TreeNode* root) {
29
30        solve(root);
31
32        return root;
33
34
35        
36    }
37};