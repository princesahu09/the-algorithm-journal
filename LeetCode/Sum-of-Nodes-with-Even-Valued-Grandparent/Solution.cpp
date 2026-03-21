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
15    int solve(TreeNode* root) {
16        if (root == nullptr) {
17            return 0;
18        }
19        int sum = 0;
20        if (root->val % 2 == 0)
21
22        {
23            if (root->left != nullptr) {
24                if (root->left->left != nullptr)
25                    sum += root->left->left->val;
26                if (root->left->right != nullptr)
27                    sum += root->left->right->val;
28            }
29            if (root->right != nullptr) {
30                if (root->right->left != nullptr)
31                    sum += root->right->left->val;
32                if (root->right->right != nullptr)
33                    sum += root->right->right->val;
34            }
35        }
36
37        int left = solve(root->left);
38        int right = solve(root->right);
39
40        return sum + left + right;
41    }
42
43    int sumEvenGrandparent(TreeNode* root) { return solve(root); }
44};