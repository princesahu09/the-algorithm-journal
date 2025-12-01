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
14    private: void solve(TreeNode* root,vector<vector<int>>&ans,int level)
15    {
16
17        if(root==nullptr)return;
18
19        if(level==ans.size())
20        {
21            ans.push_back({});
22        }
23
24        ans[level].push_back(root->val);
25
26        solve(root->left,ans,level+1);
27        solve(root->right,ans,level+1);
28
29
30       
31    }
32public:
33    vector<vector<int>> levelOrderBottom(TreeNode* root) {
34
35     
36        if(root==nullptr)return {};
37        vector<vector<int>>ans;
38      
39        solve(root,ans,0);
40        reverse(ans.begin(),ans.end());
41        return ans;
42        
43    }
44};