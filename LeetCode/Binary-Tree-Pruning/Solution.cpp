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
15    bool check(TreeNode* root) {
16        if (root == nullptr) {
17            return true;
18        }
19        if (root->val == 1) {
20            return false;
21        }
22
23        return check(root->left) && check(root->right);
24    }
25
26    void solve(TreeNode* root) {
27        if (root == nullptr) {
28            return;
29        }
30        
31        solve(root->left);
32
33        if (root->left != nullptr && check(root->left)) {
34            root->left = nullptr;
35        }
36        if (root->right != nullptr && check(root->right)) {
37            root->right = nullptr;
38        }
39        solve(root->right);
40    }
41    TreeNode* pruneTree(TreeNode* root) {
42
43        if(root->val==0&&check(root->left)&&check(root->right))
44        {
45            return nullptr;
46        }
47
48        
49
50        solve(root);
51        return root;
52    }
53};