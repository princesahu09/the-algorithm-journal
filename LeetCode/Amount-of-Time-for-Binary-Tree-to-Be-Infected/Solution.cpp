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
15    void generate(TreeNode* root, unordered_map<int, vector<int>>& adjList) {
16        if (root == nullptr) {
17            return;
18        }
19        if (root->left != nullptr) {
20            adjList[root->val].push_back(root->left->val);
21            adjList[root->left->val].push_back(root->val);
22        }
23        if (root->right != nullptr) {
24            adjList[root->val].push_back(root->right->val);
25            adjList[root->right->val].push_back(root->val);
26        }
27
28        generate(root->left, adjList);
29        generate(root->right, adjList);
30    }
31    int solve(unordered_map<int, vector<int>>& adjList, int start) {
32        int ans = 0;
33        queue<pair<int, int>> q;
34        unordered_set<int> vis;
35
36        q.push({start, ans});
37
38        while (q.size() > 0) {
39            int value = q.front().first;
40            int time = q.front().second;
41            q.pop();
42
43            if (!vis.count(value)) {
44                vis.insert(value);
45                ans = max(ans, time);
46
47                for (auto& i : adjList[value]) {
48                    q.push({i, time + 1});
49                }
50            } else {
51                continue;
52            }
53        }
54        return ans;
55    }
56    int amountOfTime(TreeNode* root, int start) {
57
58        unordered_map<int, vector<int>> adjList;
59        adjList.reserve(100000);
60        generate(root, adjList);
61        return solve(adjList, start);
62    }
63};