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
15    TreeNode* solve(TreeNode* root1, TreeNode* root2) {
16
17        if (root1 == nullptr && root2 == nullptr) {
18            return nullptr;
19        }
20        int value = (root1 ? root1->val : 0) + (root2 ? root2->val : 0);
21
22        TreeNode* newNode = new TreeNode(value);
23        newNode->left =
24            solve(root1 ? root1->left : nullptr, root2 ? root2->left : nullptr);
25        newNode->right = solve(root1 ? root1->right : nullptr,
26                               root2 ? root2->right : nullptr);
27
28        return newNode;
29    }
30    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
31
32        return solve(root1, root2);
33    }
34};