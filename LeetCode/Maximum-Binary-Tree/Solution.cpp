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
13public:
14int high(vector<int>&nums,int left,int right)
15{
16    int idx=left;
17    int big=INT_MIN;
18    for(int i=left;i<=right;i++)
19    {
20
21        if(nums[i]>big)
22        {
23            idx=i;
24            big=nums[i];
25        }
26      
27
28    }
29    return idx;
30}
31
32
33TreeNode* create(vector<int>&nums,int left,int right)
34{
35    if(left>right)
36    {
37        return nullptr;
38    }
39    int big=high(nums,left,right);
40    TreeNode* root=new TreeNode(nums[big]);
41    root->left=create(nums,left,big-1);
42    root->right=create(nums,big+1,right);
43
44    return root;
45
46}
47    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
48
49        return create(nums,0,nums.size()-1);
50        
51    }
52};