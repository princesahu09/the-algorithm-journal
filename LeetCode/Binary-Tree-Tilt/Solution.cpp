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
14
15private:
16    int total(TreeNode* root) {
17        if (root == nullptr)
18            return 0;
19
20        return root->val + total(root->left) + total(root->right);
21    }
22    void solve(TreeNode* root, vector<int>& tilt) {
23        if (root == nullptr)
24            return;
25
26        int leftsum = total(root->left);
27        int rightsum = total(root->right);
28
29        tilt.push_back(abs(leftsum - rightsum));
30
31        solve(root->left, tilt);
32        solve(root->right, tilt);
33    }
34
35public:
36    int findTilt(TreeNode* root) {
37
38        if(root==nullptr)return 0;
39
40        vector<int> tilt;
41        solve(root, tilt);
42
43        return accumulate(tilt.begin(), tilt.end(), 0);
44    }
45};