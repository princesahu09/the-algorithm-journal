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
15    TreeNode* builder(vector<int>& nums, int left, int right)
16
17    {
18
19        if (left > right)
20            return nullptr;
21
22        int mid = (right + left) / 2;
23
24        TreeNode* root = new TreeNode(nums[mid]);
25        root->left = builder(nums, left, mid - 1);
26        root->right = builder(nums, mid + 1, right);
27
28        return root;
29    }
30    TreeNode* sortedArrayToBST(vector<int>& nums) {
31
32        return builder(nums, 0, nums.size() - 1);
33    }
34};