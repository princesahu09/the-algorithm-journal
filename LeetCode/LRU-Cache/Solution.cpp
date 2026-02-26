1class LRUCache {
2public:
3    class Node {
4    public:
5        int key, val;
6        Node* prev;
7        Node* next;
8        Node(int k, int v) {
9            key = k;
10            val = v;
11            next = prev = nullptr;
12        }
13    };
14    Node* head=new Node(-1,-1);
15    Node* tail=new Node(-1,-1);
16
17    unordered_map<int,Node*>m;
18
19    void
20    addNode(Node* newNode) {
21        Node* oldNode = head->next;
22        head->next = newNode;
23        oldNode->prev = newNode;
24
25        newNode->next=oldNode;
26        newNode->prev=head;
27    }
28    void delNode(Node* oldNode) {
29        Node* oldPrev = oldNode->prev;
30
31        Node* oldNext = oldNode->next;
32        oldPrev->next = oldNext;
33        oldNext->prev = oldPrev;
34    }
35
36    int limit;
37
38    LRUCache(int capacity) { limit = capacity;
39    head->next=tail;
40    tail->prev=head; }
41
42    int get(int key) {
43
44        if (m.find(key) == m.end()) {
45
46            return -1;
47        }
48
49        Node* ansNode = m[key];
50        int ans = m[key]->val;
51        m.erase(key);
52        delNode(ansNode);
53        addNode(ansNode);
54        m[key] = ansNode;
55        return ans;
56    }
57
58    void put(int key, int value) {
59        if (m.find(key) != m.end()) {
60            Node* oldNode = m[key];
61            delNode(oldNode);
62            m.erase(key);
63        }
64
65        if (m.size() == limit) {
66            m.erase(tail->prev->key);
67            delNode(tail->prev);
68        }
69
70        Node* newNode = new Node(key, value);
71
72        addNode(newNode);
73        m[key] = newNode;
74    }
75};
76
77/**
78 * Your LRUCache object will be instantiated and called as such:
79 * LRUCache* obj = new LRUCache(capacity);
80 * int param_1 = obj->get(key);
81 * obj->put(key,value);
82 */