1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
10 * right(right) {}
11 * };
12 */
13class Solution {
14
15private:
16    void solve(TreeNode* root, vector<vector<int>>& ans, int level) {
17
18        if (root == nullptr)
19            return;
20
21        if (level == ans.size()) {
22            ans.push_back({});
23        }
24
25        ans[level].push_back(root->val);
26        solve(root->left, ans, level + 1);
27
28        solve(root->right, ans, level + 1);
29    }
30
31public:
32    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
33
34        vector<vector<int>> ans;
35
36        solve(root, ans, 0);
37
38        for(int i=1;i<ans.size();i+=2)
39        {
40            reverse(ans[i].begin(),ans[i].end());
41        }
42        return ans;
43    }
44};