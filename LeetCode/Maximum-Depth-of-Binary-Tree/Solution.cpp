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
13    private: int solve(TreeNode* a,int counter)
14    {
15        int ld=0,rd=0;
16        if(a==nullptr)
17        {
18            return 0;
19        }
20        if(a->left)
21        {
22           ld=  solve(a->left,counter+1);
23        }
24        if(a->right)
25        {
26           rd=  solve(a->right,counter+1);
27        }
28        return 1+max(ld,rd);
29    }
30public:
31    int maxDepth(TreeNode* root) {
32
33        return solve(root,0);
34        
35    }
36};