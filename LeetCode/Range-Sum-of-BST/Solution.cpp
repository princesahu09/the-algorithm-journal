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
14int ans;
15void solve(TreeNode* root,int low,int high)
16{
17    if(root==nullptr)
18    
19    {
20        return ;
21    }
22    if(root->val>=low&&root->val<=high)
23    {
24        ans+=root->val;
25
26    }
27    solve(root->left,low,high);
28    solve(root->right,low,high);
29}
30
31    int rangeSumBST(TreeNode* root, int low, int high) {
32
33      solve(root,low,high);
34      return ans;
35        
36    }
37};