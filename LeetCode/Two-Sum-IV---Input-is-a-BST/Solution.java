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
14bool search(TreeNode* root,int element,TreeNode* skip)
15{
16    if(root==nullptr)
17    {
18        return false;
19    }
20    if(root->val==element&&skip!=root)
21    {
22        return true;
23    }
24    if(root->val>element)
25    {
26        return search(root->left,element,skip);
27    }
28    else
29    {
30        return search(root->right,element,skip);
31    }
32}
33bool solve(TreeNode* root,TreeNode* ogroot,int k)
34{
35    if(root==nullptr)
36    {
37        return false;
38    }
39
40    if(search(ogroot,k-root->val,root))return true;
41
42    return solve(root->left,ogroot,k)||solve(root->right,ogroot,k);
43
44}
45    bool findTarget(TreeNode* root, int k) {
46
47        return solve(root,root,k);
48        
49    }
50};