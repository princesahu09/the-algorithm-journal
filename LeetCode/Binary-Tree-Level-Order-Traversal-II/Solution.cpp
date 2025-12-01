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
14    private: void solve(queue<TreeNode*>q,vector<vector<int>>&ans)
15    {
16
17        vector<int>level;
18          while(!q.empty())
19          {
20            TreeNode* temp=q.front();
21            q.pop();
22             
23             if(temp==nullptr)
24             {
25                ans.push_back(level);
26                level.clear();
27
28                if(!q.empty())
29                {
30                    q.push(nullptr);
31                }
32             }
33
34             else
35             {
36                level.push_back(temp->val);
37
38                if(temp->left)q.push(temp->left);
39                if(temp->right)q.push(temp->right);
40             }
41          }
42
43          reverse(ans.begin(),ans.end());
44    }
45public:
46    vector<vector<int>> levelOrderBottom(TreeNode* root) {
47
48        queue<TreeNode*>q;
49        vector<vector<int>>ans;
50        if(root==nullptr)return ans;
51        q.push(root);
52        q.push(nullptr);
53        solve(q,ans);
54        return ans;
55        
56    }
57};