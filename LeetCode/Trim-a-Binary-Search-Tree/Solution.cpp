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
14TreeNode* solve(TreeNode*& root,int low,int high)
15{
16    if(root==nullptr)
17    {
18        return nullptr;
19    }
20    if(root->val<low)
21    {
22         return solve(root->right,low,high);
23    }
24    if(root->val>high)
25    {
26        return solve(root->left,low,high);
27    }
28
29    root->left= solve(root->left,low,high);
30    root->right= solve(root->right,low,high);
31    return root;
32}
33    TreeNode* trimBST(TreeNode* root, int low, int high) {
34
35        return solve(root,low,high);
36        
37    }
38};