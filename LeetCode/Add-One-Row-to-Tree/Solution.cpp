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
14    private: void solve(TreeNode* root,int depth,int level,int val)
15    {
16
17        if(root==nullptr)return;
18
19        if(depth-1==level)
20        {
21
22           
23            TreeNode* createleft=new TreeNode(val);
24            TreeNode* createright=new TreeNode(val);
25
26
27            
28            createleft->left=root->left;
29           
30            createright->right=root->right;
31
32            root->left=createleft;root->right=createright;return;
33        }
34
35        solve(root->left,depth,level+1,val);
36        solve(root->right,depth,level+1,val);
37    }
38public:
39    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
40
41
42        if(depth==1)
43        {
44            TreeNode*  newRoot=new TreeNode(val);
45            newRoot->left=root;
46            return newRoot;
47        }
48        solve(root,depth,1,val);
49
50
51        return root;
52        
53    }
54};