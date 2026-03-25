1struct Node {
2    Node* next;
3    int val;
4    Node() {
5        next = nullptr;
6        val = 0;
7    }
8    Node(int val) {
9        next = nullptr;
10        this->val = val;
11    }
12};
13
14class MyLinkedList {
15public:
16    Node* head;
17    Node* tail;
18
19    MyLinkedList() {
20
21        head = nullptr;
22        tail = nullptr;
23    }
24
25    int size(Node* head) {
26
27        if (head == nullptr) {
28            return 0;
29        }
30        Node* temp = head;
31        int ans = 0;
32
33        while (temp != nullptr) {
34            ans++;
35            temp = temp->next;
36        }
37
38        return ans;
39    }
40
41    int get(int index) {
42
43        if (index >= size(head) || index < 0)
44            return -1;
45
46        int i = 0;
47        Node* temp = head;
48        while (i < index) {
49
50            temp = temp->next;
51            i++;
52        }
53        return temp->val;
54    }
55
56    void addAtHead(int val) {
57
58        Node* newNode = new Node(val);
59
60        if (head == nullptr) {
61            tail = head = newNode;
62
63        } else {
64            newNode->next = head;
65            head = newNode;
66        }
67    }
68
69    void addAtTail(int val) {
70
71        Node* newNode = new Node(val);
72
73        if (head == nullptr) {
74            tail = head = newNode;
75
76        } else {
77
78            tail->next = newNode;
79            tail = newNode;
80        }
81    }
82
83    void addAtIndex(int index, int val) {
84
85        Node* newNode = new Node(val);
86
87        int len = size(head);
88        if (index > len)
89            return;
90
91        if (index == 0) {
92            addAtHead(val);
93            return;
94        }
95
96        if (index > len) {
97            return;
98        }
99
100        if (len == index) {
101
102            addAtTail(val);
103            return;
104        }
105
106        int cnt = 0;
107        Node* temp = head;
108
109        while (cnt < index - 1) {
110            temp = temp->next;
111            cnt++;
112        }
113
114        newNode->next = temp->next;
115        temp->next = newNode;
116    }
117
118    void deleteAtIndex(int index) {
119
120        if (index < 0 || index >= size(head))
121            return;
122
123        if (index == 0) {
124            if (head == nullptr) {
125                tail = nullptr;
126                return;
127            } else {
128                head = head->next;
129                return;
130            }
131        }
132
133        int cnt = 0;
134        Node* temp = head;
135        while (cnt < index - 1) {
136            temp = temp->next;
137            cnt++;
138        }
139
140       Node* del=temp->next;
141       temp->next=del->next;
142
143       if(del==tail)
144       {
145        tail=temp;
146       }
147       delete del;
148    }
149};
150
151/**
152 * Your MyLinkedList object will be instantiated and called as such:
153 * MyLinkedList* obj = new MyLinkedList();
154 * int param_1 = obj->get(index);
155 * obj->addAtHead(val);
156 * obj->addAtTail(val);
157 * obj->addAtIndex(index,val);
158 * obj->deleteAtIndex(index);
159 */