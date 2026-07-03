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
13    private : void solve(TreeNode* root,vector<vector<int>>&ans,int level)
14    {
15        if(root==nullptr)return;
16
17        if(level==ans.size())
18        {
19            ans.push_back({});
20        }
21
22        ans[level].push_back(root->val);
23
24        solve(root->left,ans,level+1);
25        solve(root->right,ans,level+1);
26    }
27public:
28    vector<vector<int>> levelOrder(TreeNode* root) {
29
30
31        vector<vector<int>>ans;
32        solve(root,ans,0);
33        return ans;
34        
35    }
36};