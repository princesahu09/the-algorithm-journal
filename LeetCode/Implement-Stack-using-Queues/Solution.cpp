1class MyStack {
2public:
3
4deque<int>q;
5    MyStack() {
6        
7    }
8    
9    void push(int x) {
10        q.push_front(x);
11        
12    }
13    
14    int pop() {
15      int top=q.front();
16      q.pop_front();
17      return top;
18        
19    }
20    
21    int top() {
22        return q.front();
23        
24    }
25    
26    bool empty() {
27
28        return q.size()==0;
29        
30    }
31};
32
33/**
34 * Your MyStack object will be instantiated and called as such:
35 * MyStack* obj = new MyStack();
36 * obj->push(x);
37 * int param_2 = obj->pop();
38 * int param_3 = obj->top();
39 * bool param_4 = obj->empty();
40 */