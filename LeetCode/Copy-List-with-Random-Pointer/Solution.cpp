1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* next;
7    Node* random;
8    
9    Node(int _val) {
10        val = _val;
11        next = NULL;
12        random = NULL;
13    }
14};
15*/
16
17class Solution {
18public:
19    Node* copyRandomList(Node* head) {
20
21if(head==nullptr)return nullptr;
22        unordered_map<Node*,Node*>mp;
23
24        Node* newHead=new Node(head->val);
25        Node* oldTemp=head->next;
26        Node* newTemp=newHead;
27
28        mp[head]=newHead;
29
30        while(oldTemp!=nullptr)
31        {
32
33            Node* copyNode=new Node(oldTemp->val);
34            mp[oldTemp]=copyNode;
35            newTemp->next=copyNode;
36            oldTemp=oldTemp->next;
37            newTemp=newTemp->next;
38        }
39
40        oldTemp=head,newTemp=newHead;
41
42        while(oldTemp!=nullptr)
43        {
44            newTemp->random=mp[oldTemp->random];
45            oldTemp=oldTemp->next;
46            newTemp=newTemp->next;
47        }
48
49        return newHead;
50
51        
52    }
53};