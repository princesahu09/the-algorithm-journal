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
15    vector<int> rightSideView(TreeNode* root) {
16
17        vector<int> ans;
18        if (root == nullptr)
19            return ans;
20        queue<TreeNode*> q;
21        q.push(root);
22        q.push(nullptr);
23        TreeNode* prev = nullptr;
24
25        while (q.size() > 0) {
26
27            TreeNode* v = q.front();
28            q.pop();
29            if (v == nullptr) {
30                if (prev != nullptr) {
31                    ans.push_back(prev->val);
32                }
33                if (!q.empty()) {
34                    q.push(nullptr);
35                    continue;
36                } else
37                    break;
38            }
39            prev = v;
40            if (v->left != nullptr) {
41                q.push(v->left);
42            }
43            if (v->right != nullptr) {
44                q.push(v->right);
45            }
46        }
47        return ans;
48    }
49};