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
15    void levelOrder(TreeNode* root, vector<double>& ans) {
16
17        if (root == nullptr) {
18            return;
19        }
20        queue<TreeNode*> q;
21        q.push(root);
22
23        while (!q.empty()) {
24
25            int size = q.size();
26            double sum = 0;
27
28            for (int i = 0; i < size; i++) {
29
30                TreeNode* curr = q.front();
31                q.pop();
32                sum += curr->val;
33                if (curr->left != nullptr) {
34                    q.push(curr->left);
35                }
36                if (curr->right != nullptr) {
37                    q.push(curr->right);
38                }
39            }
40            ans.push_back(sum / size);
41        }
42    }
43    vector<double> averageOfLevels(TreeNode* root) {
44
45        vector<double> ans;
46        levelOrder(root, ans);
47
48        return ans;
49    }
50};