1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13
14    private: int solve(TreeNode* root)
15    {
16        if(!root)return 0;
17        if(!root->left&&!root->right)
18        {
19            return 1;;
20        }
21        if(!root->right)
22        {
23            return 1+solve(root->left);
24        }
25        if(!root->left)
26        {
27            return 1+solve(root->right);
28        }
29
30        return 1+min(solve(root->left),solve(root->right));
31
32        
33    }
34public:
35    int minDepth(TreeNode* root) {
36
37        return solve(root);
38        
39    }
40};