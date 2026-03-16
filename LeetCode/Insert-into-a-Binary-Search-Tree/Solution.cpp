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
14TreeNode* solve(TreeNode* root,int value)
15{
16    if(root==nullptr)
17    {
18        return root ;
19    }
20
21    if(root->left==nullptr&&root->val>value)
22    {
23        TreeNode* newNode=new TreeNode(value);
24        root->left=newNode;
25        return root;
26    }
27    if(root->right==nullptr&&root->val<value)
28    {
29        TreeNode* newNode=new TreeNode(value);
30        root->right=newNode;
31        return root;
32    }
33
34    if(root->val>value)
35    {
36        solve(root->left,value);
37    }
38    else
39    {
40        solve(root->right,value);
41    }
42
43    return root;
44}
45    TreeNode* insertIntoBST(TreeNode* root, int val) {
46
47        if(root==nullptr)
48        {
49            TreeNode* newNode=new TreeNode(val);
50            return newNode;
51        }
52
53        return solve(root,val);
54        
55    }
56};