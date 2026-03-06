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
14public:
15    void solve(TreeNode* root, int targetSum, vector<int> temp,
16               vector<vector<int>>& ans) {
17
18        if (root == nullptr) {
19            return;
20        }
21
22        temp.push_back(root->val);
23        targetSum -= root->val;
24        // cout<<targetSum<<endl;
25        if (root->left == nullptr && root->right == nullptr) {
26
27            if (targetSum == 0) {
28                ans.push_back(temp);
29            }
30            return;
31        }
32
33        solve(root->left, targetSum, temp, ans);
34        solve(root->right, targetSum, temp, ans);
35    }
36    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
37
38        vector<vector<int>> ans;
39        vector<int> temp;
40
41        solve(root, targetSum, temp, ans);
42        return ans;
43    }
44};