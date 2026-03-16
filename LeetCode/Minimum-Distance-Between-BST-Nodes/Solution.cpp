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
15    void solve(TreeNode* root, int& low, int& second) {
16        if (root == nullptr) {
17            return;
18        }
19
20        solve(root->left, low, second);
21
22        if (second != INT_MAX) {
23            low = min(low, root->val - second);
24        }
25        second = root->val;
26
27        solve(root->right, low, second);
28    }
29
30    int minDiffInBST(TreeNode* root) {
31
32        int low = INT_MAX;
33        int second = INT_MAX;
34
35        solve(root, low, second);
36
37        return low;
38    }
39};