1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    int find(TreeNode* root, TreeNode* target) {
14        if (root == nullptr) {
15            return -1;
16        }
17        if (root == target) {
18            return root->val;
19        }
20
21        int left = find(root->left, target);
22        if (left != -1)
23
24        {
25            return left;
26        }
27        return find(root->right, target);
28    }
29
30    TreeNode* solve(TreeNode* root, int target) {
31        if (root == nullptr) {
32            return nullptr;
33        }
34
35        if (root->val == target) {
36            return root;
37        }
38        TreeNode* node = solve(root->left, target);
39        if (node != nullptr) {
40            return node;
41        }
42
43        return solve(root->right, target);
44    }
45    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned,
46                            TreeNode* target) {
47
48        int finder = find(original, target);
49
50        return solve(cloned, finder);
51    }
52};