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
14
15int height(TreeNode* root)
16{
17    if(root==nullptr)
18    {
19        return 0;
20    }
21
22    return 1+max(height(root->left),height(root->right));
23}
24
25void solve(TreeNode* root,int row,int col,int height,vector<vector<string>>&ans)
26{
27    if(root==nullptr)
28    {
29        return ;
30    }
31    ans[row][col]=to_string(root->val);
32    int offset=pow(2,height-row-1);
33
34    solve(root->left,row+1,col-offset,height,ans);
35    solve(root->right,row+1,col+offset,height,ans);
36}
37    vector<vector<string>> printTree(TreeNode* root) {
38
39        int h=height(root)-1;
40        cout<<h<<endl;
41        int row=h+1;
42        int col=pow(2,h+1)-1;
43        vector<vector<string>>ans(row,vector<string>(col,""));
44        
45        solve(root,0,(col-1)/2,h,ans);
46        return ans;
47        
48    }
49};