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
14    private:void solve(TreeNode* root,vector<int>&ans)
15
16    {
17        if(!root)return;
18        solve(root->left,ans);
19        solve(root->right,ans);
20        ans.push_back(root->val);
21    }
22public:
23    vector<int> postorderTraversal(TreeNode* root) {
24        vector<int>ans;
25
26        solve(root,ans);
27        return ans;
28        
29    }
30};