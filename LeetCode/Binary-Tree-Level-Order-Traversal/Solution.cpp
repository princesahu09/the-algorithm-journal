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
16    void solve( vector<vector<int>>& ans, queue<TreeNode*>& q)
17
18    {
19        
20        vector<int>level;
21        while(!q.empty())
22        {
23            TreeNode* temp=q.front();
24            q.pop();
25
26            if(temp==nullptr)
27            {
28                ans.push_back(level);
29                level.clear();
30
31                if(!q.empty())
32                {
33                    q.push(nullptr);
34                }
35            }
36
37            else
38            {
39                level.push_back(temp->val);
40
41                if(temp->left)q.push(temp->left);
42                if(temp->right)q.push(temp->right);
43            }
44        }
45    }
46
47public:
48    vector<vector<int>> levelOrder(TreeNode* root) {
49
50        vector<vector<int>> ans;
51
52        if(root==nullptr)return ans;
53       
54        queue<TreeNode*> q;
55        q.push(root);
56        q.push(nullptr);
57        solve( ans, q);
58
59        return ans;
60    }
61};