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
15int height(TreeNode* root)
16{
17    if(root==nullptr)return 0;
18
19    return 1+max(height(root->left),height(root->right));
20}
21
22
23int dia(TreeNode* root)
24{
25    if(root==nullptr)return 0;
26
27    int leftDia=dia(root->left);
28    int rightDia=dia(root->right);
29    int curr=height(root->left)+height(root->right);
30    return max({leftDia,rightDia,curr});
31}
32    int diameterOfBinaryTree(TreeNode* root) {
33
34        return dia(root);
35        
36    }
37};