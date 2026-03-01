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
14
15int ans=0;
16
17int height(TreeNode* root)
18{
19    if(root==nullptr)return 0;
20    int left=height(root->left);
21    int right=height(root->right);
22    ans=max(ans,left+right);
23
24    return 1+max(left,right);
25}
26
27
28
29    int diameterOfBinaryTree(TreeNode* root) {
30
31        height(root);
32
33        return ans;
34        
35    }
36};