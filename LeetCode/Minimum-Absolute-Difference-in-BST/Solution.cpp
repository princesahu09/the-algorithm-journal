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
15    void solve(TreeNode* root, int& prev, int& ans) {
16        if (root == nullptr) {
17            return;
18        }
19        solve(root->left, prev, ans);
20
21        if (prev != -1) {
22            ans = min(ans, abs(root->val - prev));
23        }
24        prev = root->val;
25
26        solve(root->right, prev, ans);
27    }
28    int getMinimumDifference(TreeNode* root) {
29        int ans = INT_MAX;
30        int prev = -1;
31        solve(root, prev, ans);
32
33        return ans;
34    }
35};