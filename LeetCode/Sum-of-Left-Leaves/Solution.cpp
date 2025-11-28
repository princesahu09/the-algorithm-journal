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
14    private: void solve(TreeNode* root,int &ans)
15    {
16        if(!root)return;
17        if(root->left&&root->left->right==nullptr&&root->left->left==nullptr)
18        {
19            ans+=root->left->val;
20        }
21       
22        solve(root->left,ans);
23        solve(root->right,ans);
24        
25    
26    }
27public:
28    int sumOfLeftLeaves(TreeNode* root) {
29
30        int ans=0;
31
32        solve(root,ans);
33        return ans;
34        
35    }
36};