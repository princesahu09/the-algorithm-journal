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
15    int level(TreeNode* root) {
16        if (root == nullptr) {
17            return 0;
18        }
19        return 1 + max(level(root->left), level(root->right));
20    }
21    int solve(TreeNode* root, int curr, int height) {
22        if (root == nullptr) {
23            return 0;
24        }
25
26        if (curr == height) {
27            return root->val + solve(root->left, curr + 1, height) +
28                   solve(root->right, curr + 1, height);
29        }
30        return solve(root->left, curr + 1, height) +
31               solve(root->right, curr + 1, height);
32    }
33    int deepestLeavesSum(TreeNode* root) {
34
35        int h = level(root);
36        cout << h << endl;
37
38        return solve(root, 1, h );
39    }
40};