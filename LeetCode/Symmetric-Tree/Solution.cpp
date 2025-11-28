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
14    private: bool solve(TreeNode* a,TreeNode* b)
15    {
16
17        if(!a&&!b)return true;
18        if(!a||!b)return false;
19
20        if(a->val!=b->val)return false;
21
22        return solve(a->left,b->right)&&solve(a->right,b->left);
23        
24    }
25public:
26    bool isSymmetric(TreeNode* root) {
27
28        if(!root)return true;
29        return solve(root->left,root->right);
30        
31    }
32};