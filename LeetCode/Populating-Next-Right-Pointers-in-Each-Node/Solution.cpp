1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* left;
7    Node* right;
8    Node* next;
9
10    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
11
12    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
13
14    Node(int _val, Node* _left, Node* _right, Node* _next)
15        : val(_val), left(_left), right(_right), next(_next) {}
16};
17*/
18
19class Solution {
20public:
21    Node* connect(Node* root) {
22        if (root == nullptr)
23            return nullptr;
24
25        queue<Node*> q;
26        q.push(root);
27        q.push(nullptr);
28
29        while (q.size() > 0) {
30
31            Node* curr = q.front();
32            q.pop();
33
34            if (curr == nullptr) {
35                if (!q.empty()) {
36                    q.push(nullptr);
37                    continue;
38                } else {
39                    break;
40                }
41            }
42            if (!q.empty()) {
43                curr->next = q.front();
44            }
45
46            if (curr->left != nullptr) {
47                q.push(curr->left);
48            }
49            if (curr->right != nullptr) {
50                q.push(curr->right);
51            }
52        }
53
54        return root;
55    }
56};