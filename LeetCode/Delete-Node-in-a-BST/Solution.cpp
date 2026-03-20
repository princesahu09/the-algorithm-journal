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
15    bool finder(TreeNode* root, int key) {
16        if (root == nullptr) {
17            return false;
18        }
19        if (root->val == key) {
20            return true;
21        }
22
23        return finder(root->left, key) || finder(root->right, key);
24    }
25
26    TreeNode* smaller(TreeNode* root) {
27        while (root->left != nullptr) {
28            root = root->left;
29        }
30
31        return root;
32    }
33    TreeNode* bigger(TreeNode* root) {
34        while (root->right != nullptr) {
35            root = root->right;
36        }
37
38        return root;
39    }
40
41    TreeNode* solve(TreeNode* root, int key) {
42        if (root == nullptr) {
43            return nullptr;
44        }
45
46        if (key > root->val) {
47            root->right = solve(root->right, key);
48        } else if (key < root->val) {
49            root->left = solve(root->left, key);
50        } else {
51            if (root->left == nullptr && root->right == nullptr) {
52                delete root;
53                return nullptr;
54            }
55
56            if (root->left == nullptr) {
57                TreeNode* temp = root->right;
58                delete root;
59                return temp;
60            }
61            if (root->right == nullptr) {
62                TreeNode* temp = root->left;
63                delete root;
64                return temp;
65            }
66
67            TreeNode* temp = bigger(root->left);
68            root->val = temp->val;
69            root->left = solve(root->left, temp->val);
70        }
71        return root;
72    }
73    TreeNode* deleteNode(TreeNode* root, int key) {
74
75        if (!finder(root, key)) {
76            return root;
77        }
78
79        return solve(root, key);
80    }
81};