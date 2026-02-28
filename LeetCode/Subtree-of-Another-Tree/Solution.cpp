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
15bool same(TreeNode* root1,TreeNode* root2)
16{
17    if(root1==nullptr&&root2==nullptr)return true;
18    if(root1==nullptr||root2==nullptr)return false;
19    if(root1->val!=root2->val)return false;
20
21    return same(root1->left,root2->left)&&same(root1->right,root2->right);
22}
23
24bool solve(TreeNode* root,TreeNode* subRoot)
25{
26    if(root==nullptr&&subRoot==nullptr)return true;
27    if(root==nullptr||subRoot==nullptr)return false;
28    if(root->val==subRoot->val&&same(root,subRoot))return true;
29
30    return solve(root->left,subRoot)||solve(root->right,subRoot);
31}
32    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
33
34        return solve(root,subRoot);
35        
36    }
37};