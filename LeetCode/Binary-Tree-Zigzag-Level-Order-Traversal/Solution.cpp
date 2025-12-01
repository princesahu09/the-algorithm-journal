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
25        if(level%2==0)
26
27        ans[level].push_back(root->val);
28        else
29        ans[level].insert(ans[level].begin(),root->val);
30        solve(root->left, ans, level + 1);
31
32        solve(root->right, ans, level + 1);
33    }
34
35public:
36    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
37
38        vector<vector<int>> ans;
39
40        solve(root, ans, 0);
41
42       
43        return ans;
44    }
45};