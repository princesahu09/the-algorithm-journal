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
15    int search(vector<int>& inorder, int value, int left, int right) {
16
17        for (int i = left; i <= right; i++) {
18            if (inorder[i] == value) {
19                return i;
20            }
21        }
22
23        return -1;
24    }
25
26    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int& idx,
27                    int left, int right) {
28
29        if (left > right) {
30            return nullptr;
31        }
32        TreeNode* root = new TreeNode(postorder[idx]);
33
34        int i = search(inorder, postorder[idx], left, right);
35        idx--;
36
37        root->right = solve(inorder, postorder, idx, i + 1, right);
38        root->left = solve(inorder, postorder, idx, left, i - 1);
39
40        return root;
41    }
42    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
43        int i = inorder.size() - 1;
44
45        return solve(inorder, postorder, i, 0, inorder.size() - 1);
46    }
47};