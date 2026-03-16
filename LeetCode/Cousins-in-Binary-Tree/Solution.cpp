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
15    pair<TreeNode*, int> depth(TreeNode* root, TreeNode* parent, int value,
16                               int level) {
17        if (root == nullptr) {
18            return {nullptr, -1};
19        }
20
21        if (root->val == value) {
22            return {parent, level + 1};
23        }
24        parent = root;
25
26        auto left = depth(root->left, parent, value, level + 1);
27        if (left.first != nullptr)
28            return left;
29        return depth(root->right, parent, value, level + 1);
30    }
31    bool isCousins(TreeNode* root, int x, int y) {
32
33        auto x2 = depth(root, root, x, 0);
34        auto y2 = depth(root, root, y, 0);
35
36        if (x2.second == y2.second && x2.first != y2.first)
37            return true;
38        return false;
39    }
40};