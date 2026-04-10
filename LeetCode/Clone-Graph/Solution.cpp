1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> neighbors;
7    Node() {
8        val = 0;
9        neighbors = vector<Node*>();
10    }
11    Node(int _val) {
12        val = _val;
13        neighbors = vector<Node*>();
14    }
15    Node(int _val, vector<Node*> _neighbors) {
16        val = _val;
17        neighbors = _neighbors;
18    }
19};
20*/
21
22class Solution {
23public:
24    unordered_map<Node*, Node*> mp;
25    Node* solve(Node* node) {
26        if (node == nullptr)
27
28        {
29            return nullptr;
30        }
31
32        if (mp.count(node))
33            return mp[node];
34        Node* newNode = new Node(node->val);
35        mp[node] = newNode;
36
37        for (auto& i : node->neighbors) {
38
39            newNode->neighbors.push_back(solve(i));
40        }
41
42        return newNode;
43    }
44    Node* cloneGraph(Node* node) { return solve(node); }
45};