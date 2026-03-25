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
15    TreeNode* solve(vector<int>& inorder, int& i, int big) {
16
17        if (i == inorder.size() || inorder[i] > big)
18            return nullptr;
19        TreeNode* root = new TreeNode(inorder[i++]);
20        root->left = solve(inorder, i, root->val);
21        root->right = solve(inorder, i, big);
22
23        return root;
24    }
25    TreeNode* bstFromPreorder(vector<int>& preorder) {
26
27        int i = 0;
28        int big=*max_element(preorder.begin(),preorder.end());
29        return solve(preorder, i, big);
30    }
31};