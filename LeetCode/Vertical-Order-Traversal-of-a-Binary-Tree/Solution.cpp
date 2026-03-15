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
15    void solve(TreeNode* root, int row, int col,
16               map<int, map<int, multiset<int>>>& ans) {
17        if (root == nullptr) {
18            return;
19        }
20        ans[col][row].insert(root->val);
21        solve(root->left, row + 1, col - 1, ans);
22        solve(root->right, row + 1, col + 1, ans);
23    }
24
25    vector<vector<int>> refiner(map<int, map<int, multiset<int>>>& ans) {
26
27        vector<vector<int>> result;
28
29        for (auto& i : ans) {
30            vector<int> column;
31
32            for (auto& j : i.second) {
33                column.insert(column.end(), j.second.begin(), j.second.end());
34            }
35            result.push_back(column);
36        }
37
38        return result;
39    }
40    vector<vector<int>> verticalTraversal(TreeNode* root) {
41        map<int, map<int, multiset<int>>> ans;
42        solve(root, 0, 0, ans);
43        return refiner(ans);
44    }
45};