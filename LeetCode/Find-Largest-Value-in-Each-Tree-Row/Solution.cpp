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
15    vector<int> largestValues(TreeNode* root) {
16        if(root==nullptr)
17        {
18            return {};
19        }
20        vector<int> ans;
21        
22        queue<TreeNode*> q;
23
24        q.push(root);
25        q.push(nullptr);
26
27        int high = INT_MIN;
28
29        while (q.size() > 0) {
30            TreeNode* curr = q.front();
31            q.pop();
32            if (curr == nullptr) {
33                if (!q.empty()) {
34                    q.push(nullptr);
35                } 
36                    ans.push_back(high);
37                    high = INT_MIN;
38                   
39                
40                continue;
41            }
42
43            high = max(curr->val, high);
44
45            if (curr->left != nullptr) {
46                q.push(curr->left);
47            }
48            if (curr->right != nullptr) {
49                q.push(curr->right);
50            }
51        }
52
53        return ans;
54    }
55};