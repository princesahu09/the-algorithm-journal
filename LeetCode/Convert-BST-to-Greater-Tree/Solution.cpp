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
15    int greaterKey(TreeNode* root, int high) {
16        if (root == nullptr) {
17            return 0;
18        }
19
20        if (root->val <= high) {
21            return greaterKey(root->right, high);
22        }
23
24        return root->val + greaterKey(root->right, high) +
25               greaterKey(root->left, high);
26    }
27
28    void solve(TreeNode* root, TreeNode* o) {
29        if (root == nullptr) {
30            return;
31        }
32
33        int org = root->val;
34
35        solve(root->left, o);
36        root->val = org + greaterKey(o, org);
37        solve(root->right, o);
38    }
39    TreeNode* create(TreeNode* root) {
40        if (root == nullptr) {
41            return nullptr;
42        }
43
44        TreeNode* newNode = new TreeNode(root->val);
45        newNode->left = create(root->left);
46        newNode->right = create(root->right);
47
48        return newNode;
49    }
50    TreeNode* convertBST(TreeNode* root) {
51
52        TreeNode* dummy = create(root);
53        solve(root, dummy);
54        return root;
55    }
56};