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
14void solve(TreeNode * &root,int low,int high)
15{
16    if(root==nullptr)
17    {
18        return;
19    }
20    solve(root->left,low,high);
21    solve(root->right,low, high);
22    if(root->val<low)
23    {
24        root->left=nullptr;
25        root=root->right;
26        solve(root,low,high);
27        return;
28    }
29    if(root->val>high)
30    {
31        root->right=nullptr;
32        root=root->left;
33        solve(root,low,high);
34        return;
35    }
36}
37    TreeNode* trimBST(TreeNode* root, int low, int high) {
38
39        solve(root,low,high);
40        return root;
41
42
43        
44    }
45};