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
15    int path(TreeNode* root, int value) {
16        if (root == nullptr) {
17            return 0;
18        }
19        int left = 0;
20        int right = 0;
21        if (root->left && root->left->val == value) {
22            left = 1 + path(root->left, value);
23        }
24
25        if (root->right && root->right->val == value) {
26            right = 1 + path(root->right, value);
27        }
28        return max(left, right);
29    }
30
31    void solve(TreeNode* root, int& ans) {
32        if (root == nullptr) {
33            return;
34        }
35        int leftpath = 0;
36        int rightpath = 0;
37
38        if (root->left && root->left->val == root->val)
39            leftpath = 1 + path(root->left, root->val);
40        if (root->right && root->right->val == root->val)
41            rightpath = 1 + path(root->right, root->val);
42
43        ans = max(ans, leftpath + rightpath);
44
45        solve(root->left, ans);
46        solve(root->right, ans);
47    }
48    int longestUnivaluePath(TreeNode* root) {
49
50        int ans = 0;
51        solve(root, ans);
52        return ans;
53    }
54};