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
15int search(vector<int>&inorder,int val,int left,int right)
16{
17    for(int i=left;i<=right;i++)
18    {
19        if(inorder[i]==val)
20        {
21            return i;
22        }
23    }
24    return -1;
25}
26
27
28TreeNode* helper(vector<int>&preorder,vector<int>&inorder,int& preIdx,int left,int right)
29{
30    if(left>right)
31    {
32        return nullptr;
33    }
34    TreeNode* root=new TreeNode(preorder[preIdx]);
35    int inIdx=search(inorder,preorder[preIdx],left,right);
36    preIdx++;
37    root->left=helper(preorder,inorder,preIdx,left,inIdx-1);
38    root->right=helper(preorder,inorder,preIdx,inIdx+1,right);
39
40    return root;
41}
42    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
43
44        int preIdx=0;
45        
46
47        return helper(preorder,inorder,preIdx,0,inorder.size()-1);
48    }
49};